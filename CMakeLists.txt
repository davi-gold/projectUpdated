cmake_minimum_required(VERSION 3.13)
project(projectUpdated)

set(CMAKE_CXX_STANDARD 14)

add_executable(projectUpdated main.cpp Translator.cpp Translator.h Command.h UnaryExp.h BinaryExp.h doMath/Addition.h ConditionCommand.h doMath/Division.h doMath/Multiply.h Expression.h doMath/Subtraction.h doMath/Num.h ConditionalCommands/WhileCommand.h ConditionalCommands/EqualsEquals.h MathShuntYard.cpp MathShuntYard.h MultiCommand.h ConditionalCommands/SmallerThan.h ConditionalCommands/GreaterThan.h ConditionalCommands/GreaterOrEqual.h ConditionalCommands/SmallerOrEqual.h ConditionalCommands/IfCommand.h ExpressionFactory.cpp ExpressionFactory.cpp doMath/AllMath.h Data.cpp Data.h Parser.cpp DefineVar.h)