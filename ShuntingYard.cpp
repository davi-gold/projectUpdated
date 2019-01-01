//
// Created by schwe on 31/12/2018.
//

#include "ShuntingYard.h"

/**
 * ShuntingYard: This function evaluates a given Expression
 * (it requires that all tokens be seperated by spaces)
 * Input:Database *d, vector<string> lexer, int i
 * Output:vector<double>
**/
using namespace std;

vector<double> ShuntingYard(DataBase *d, vector <string> lexIn, int i) {
    int j = i;
    vector<string> symbols = {"+", "-", "*", "/"};
    for (; j < lexIn.size() - 1; j++) {
        bool isSymbol = false;
        bool nextSymbol = false;
        for (int k = 0; k < symbols.size(); ++k) {
            if (!lexIn[j].compare(symbols[k])) {
                isSymbol = true;
            }
            if (!lexIn[j + 1].compare(symbols[k])) {
                nextSymbol = true;
            }
        }
        if (!lexIn[j].compare("(") && !lexIn[j + 1].compare(")") ){
            throw invalid_argument("ERROR: empty parentheses");
        }
        if (!isSymbol && !nextSymbol && lexIn[j].compare("(") && lexIn[j + 1].compare(")")) {
            break;
        }
    }

    string s;
    for (int k = i; k <= j; k++) {
        if (d->isSymbol(lexIn[k])) {
            s = s + to_string(d->getSymbolValue(lexIn[k]));
        } else if (regex_match(lexIn[k], regex("^\\d*[(\\d\\.\\d)\\d]\\d*$")) || !lexIn[k].compare("(") ||
                   !lexIn[k].compare(")") || !lexIn[k].compare("+") || !lexIn[k].compare("-") || !lexIn[k].compare("/") ||
                   !lexIn[k].compare("*")) {
            s = s + lexIn[k];
        } else {
            throw invalid_argument("Incorrect Expression!");
        }

        if (k != j) {
            s = s + " ";
        }
    }

    int paren = 0;
    for (int l = i; l <= j; ++l) {
        if (!lexIn[l].compare("(")) {
            paren++;
        }
        if (!lexIn[l].compare(")")) {
            paren--;
        }
        if (paren < 0) {
            throw invalid_argument("ERROR: The parentheses are unbalanced.");
        }
    }

    if (paren != 0) {
        throw invalid_argument("ERROR: The Parenthesis unbalanced.");
    }

    vector<double> ans = {evaluate(s), (double) j};
    return ans;
}
/**
 *priority: This function tells us if one operator has
 * a higher priority than another.
 * @param char op
 * @return double
 */

double priority(char op) {
    if (op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/')
        return 2;
    return 0;
}

// Function to perform arithmetic operations.
double applyOp(double a, double b, char op) {
    Expression *aEx = new Num(a);
    Expression *bEx = new Num(b);
    Expression *outEx;
    double ans;
    switch (op) {

        case '+':
            outEx = new Addition(aEx, bEx);
            break;
        case '-':
            outEx = new Subtract(aEx, bEx);
            break;
        case '*':
            outEx = new Multiply(aEx, bEx);
            break;
        case '/':
            outEx = new Div(aEx, bEx);
            break;
    }

    ans = outEx->calculate();
    delete (aEx);
    delete (bEx);
    delete (outEx);
    return ans;
}

// Function that returns value of
// expression after evaluation.
double evaluate(const string &tokens) {
    int i;
    bool wasOperation = false;

    // stack to store integer values.
    stack<double> values;

    // stack to store operators.
    stack<char> ops;
    double isNeg = 1;

    for (i = 0; i < tokens.length(); i++) {

        // Current token is a whitespace,
        // skip it.
        if (tokens[i] == ' ')
            continue;

            // Current token is an opening
            // brace, push it to 'ops'
        else if (tokens[i] == '(') {
            ops.push(tokens[i]);
        }


            // Current token is a number, push
            // it to stack for numbers.
        else if (isdigit(tokens[i]) || !wasOperation) {
            double val = 0;
            double decimal = 10;
            bool afterPoint = false;

            if (tokens[i] == '-') {
                isNeg = -1;
                continue;
            }

            // There may be more than one
            // digits in number.
            while (i < tokens.length() &&
                   (isdigit(tokens[i]) || tokens[i] == '.')) {
                if (tokens[i] == '.') {
                    afterPoint = true;
                } else {
                    if (!afterPoint)
                        val = (val * 10) + (tokens[i] - '0');
                    else {
                        val += (tokens[i] - '0') / decimal;
                        decimal *= 10;
                    }
                }
                i++;
            }
            wasOperation = true;
            val *= isNeg;
            values.push(val);
            isNeg = 1;
        }

            // Closing brace encountered, solve
            // entire brace.
        else if (tokens[i] == ')') {
            while (!ops.empty() && ops.top() != '(') {
                double val2 = values.top();
                values.pop();


                double val1 = values.top();
                values.pop();

                char op = ops.top();
                ops.pop();

                values.push(applyOp(val1, val2, op));
            }

            // pop opening brace.
            ops.pop();
        }

            // Current token is an operator.
        else {
            wasOperation = false;
            // While top of 'ops' has same or greater
            // priority to current token, which
            // is an operator. Apply operator on top
            // of 'ops' to top two elements in values stack.
            while (!ops.empty() && priority(ops.top())
                                   >= priority(tokens[i])) {
                double val2 = values.top();
                values.pop();

                double val1 = values.top();
                values.pop();


                char op = ops.top();
                ops.pop();

                values.push(applyOp(val1, val2, op));
            }

            // Push current token to 'ops'.
            ops.push(tokens[i]);
        }
    }

    // Entire expression has been parsed at this
    // point, apply remaining ops to remaining
    // values.
    while (!ops.empty()) {
        double val2 = values.top();
        values.pop();

        double val1 = values.top();
        values.pop();

        char op = ops.top();
        ops.pop();

        values.push(applyOp(val1, val2, op));
    }

    // Top of 'values' contains result, return it.
    return values.top();
}
