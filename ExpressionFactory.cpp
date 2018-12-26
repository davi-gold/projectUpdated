//
// Created by schwe on 26/12/2018.
//
#include "ExpressionFactory.h"


typedef std::pair<std::string, std::string> stringpair_t;
const stringpair_t start_values[] = {
        stringpair_t("Cat", "Feline"),
        stringpair_t("Dog", "Canine"),
        stringpair_t("Fish", "Fish")
};
using namespace std;

class: ExpressionFactory {

public:
    ///**
/**
 * This function sorts the strings into stacks (ShuntingYard)
 * @param list<string> input
 * @return
 */

    void ExpressionSortingYard(list<string> input) {
        //we read the first string of our list
        list<string>::iterator
                index = input.begin();


        list<string>::iterator
                end = input.end();
        string buffer = *index;
        stack<string> outputStack;
        stack<string> operatorStack;

//we iterate over the entire list
        while (index != input.end()) {


            //we check for operators
            if (buffer == "=" || buffer == "var" || buffer == "bind" || "while" || buffer == "{" || "}") {
                //if we received 'weak' operators we confirm
                if (buffer == "var" || buffer == "bind") {
                    //we check if we need to remove any Higher Operators
                    while (operatorStack.top() == "=") {
                        outputStack.push(operatorStack.top());
                        operatorStack.pop();
                    }
                    operatorStack.push(buffer);
                }

                //if we found an "=" sign

                //if we found a "while", or "if"
//find "{" and "}"-make a new list, then we recursively call "Expression Factory" (or just a "Stack Factory?") for the new list-


                //if we found a ";"
                //we execute what we've found and advance to the next command

                //if we found "openServer"
                //new OpenDataServer

                //if we found "connect"

                //new Connect

            }
                //if we havent found "=,var,bind,while,{,}
            else {


            }
            //if we have a variable (of any type)
            else {
                outputStack.push(*index);
            }


            //now we advance on to the next string
            advance(index, 1);


        }


    };


    ///**
/**
 * This function receives 2 stacks and returns the constructed Expressions
 * @param file
 * @return list of expression
 */

    CommandExpression : ExpressionFactorySorted(stack<string> outputs, stack<string> operators){


    };

};