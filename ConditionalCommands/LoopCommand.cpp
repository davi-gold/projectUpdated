//
// Created by schwe on 23/12/2018.
//

#include "LoopCommand.h"

 class LoopCommand {
     ///**
/**Constructor:
 * This function receives two conditions, the boolean condition between them, and a command.
 * As long as the condition between a and b is correct-we execute the given command
 * @param MathExpression a,b; ConditionCommand between; doCommand toDo;
 * @return void
 */
     LoopCommand(MathExpression *a, MathExpression *b, ConditionCommand *between, doCommand *toDo,) {
         *toDo=*toDO;
         *a=*a;
         *b=*b;
         *between=*between;
         loopsLeft=0;
         if(between->execute()=="<"){
             loopsLeft=((b->calculate())-(a->calculate()));
         }

     };

     LoopCommand(MathExpression *a, MathExpression *b, EqualsEquals *between, doCommand *toDo,) {

     };


//we execute the required commands
     void LoopCommand::execute() {


     }

     int LoopCommand::getLoopsLeft() const {
         return loopsLeft;
     }

     void LoopCommand::setLoopsLeft(int loopsLeft) {
         LoopCommand::loopsLeft = loopsLeft;
     }
 };