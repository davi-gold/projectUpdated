//
// Created by schwe on 26/12/2018.
//
#include "ConditionCommand.h"
#include "ConditionalCommands/IfCommand.h"
#include "ConditionalCommands/WhileCommand.h"
#include "Data.h"
#include "Expression.h"
#include "CommandExpression.h"
#include "Command.h"
#include "MathShuntYard.h"
#include "MultiCommand.h"
#include "doMath/AllMath.h"
#include "Translator.h"
#include <string>
#include <list>
#include <stack>
#include <map>
#include <vector>
#include "Data.h"
#include "DefineVar.h"

using namespace std;

class ExpressionFactory {

public:
    CommandExpression created;
    Data *data = data->getInstance;

    //constructor
    ExpressionFactory(list<string> input) {
        created = ExpressionSortFactory(input);
    };


/**
 * This function sorts the strings into stacks (ShuntingYard)
 * @param list<string> input
 * @return
 */
    CommandExpression ExpressionSortFactory(list<string> input) {
        //we read the first string of our list
        list<string>::iterator index = input.begin();
        string buffer = *index;
//we iterate over the entire list
        while (*index != ";") {

            string buffer = *index;

            //if we find a 'loop' command
            if (buffer == "while" || buffer == "if") {
                //we advance into the condition
                advance(index, 1);

                list<string> CondList;
                while (*index != "{") {
                    CondList.push_back(*index);
                }
                //we create the condition
                ConditionCommand newCondition = new ConditionCommand(ExpressionFactory(CondList));

                //we create a list of the loop commands (and condition)
                list<string> loopList;
                while (*index != "}") {
                    loopList.push_back(*index);
                }
                //we now send our list to a function that will create a MultiCommand
                MultiCommand multi = LoopFactory(loopList));
                //we now create either an "if" or a "while" command
                if (buffer == "if") {
                    IfCommand ourCommand = new IfCommand(newCondition, multi);
                    return ourCommand;
                } else {
                    if (buffer == "while") {
                        WhileCommand ourCommand = new WhileCommand(newCondition, multi);
                        return ourCommand;
                    }
                }


            } else {

                //if we found a "var" operator
                if (buffer == "var") {
                    advance(index, 1);
                    //we save the name for our new Variable
                    string tempName = *index;
                    //we advance past the "=" sign
                    advance(index, 2);
                    if (*index == "bind") {
                        advance(index, 1);
                        CommandExpression ourCommand = new DefineVar(tempName, *index);
                        return ourCommand;
                        //if we ARENT binding the new variable we need to generate a final value
                    } else {
                        list<string> newList;
                        advance(index, 1);
                        while (*index != ";") {
                            newList.push_back(*index);
                            advance(index, 1);
                        }
                        CommandExpression ourCommand = new DefineVar(tempName, ExpressionFactory(newList));
                        return ourCommand;
                    }

                }
                //otherwise we must have found a variable
            }else{
                //if it is a Math variable it will contain operators and/or numbers
                if (buffer) {


                }
                    //if it is a previously defined variable
                else {

                }
            }



            //now we return the expression
            return ourCommand;
        }


    };


    MultiCommand LoopFactory(list<string> input2) {

        list<string>::iterator lIndex = input2.begin();
        //we advance past the "{" and into the commands
        advance(lIndex, 2);
        //we create a list of the commands to add
        list<CommandExpression> listOfCommands;
        while (*lIndex != "}") {
            list<string> tempList;
            while (*lIndex != ";") {
                tempList.push_back(*lIndex);
                advance(lIndex, 1);

                listOfCommands.push_back(new CommandExpression(ExpressionFactory(tempList)))
                advance(index, 1);
            }
        }
        //we now have the condition AND the list of commands
        MultiCommand ourCommand = new MultiCommand(listOfCommands);
        return ourCommand;

    }


};