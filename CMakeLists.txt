cmake_minimum_required(VERSION 3.13)
project(projectUpdated)

set(CMAKE_CXX_STANDARD 14)

add_executable(projectUpdated main.cpp Translator.cpp Translator.h Command.h UnaryExp.h BinaryExp.h doMath/Addition.h ConditionCommand.h doMath/Division.h doMath/Multiply.h MathExpression.h doMath/Subtraction.h doMath/Num.h doCommand.h ConditionalCommands/WhileCommand.h ConditionalCommands/EqualsEquals.h ShuntYard.cpp ShuntYard.h MultiCommandcpp MultiCommand.h ConditionalCommands/SmallerThan.h ConditionalCommands/GreaterThan.h ConditionalCommands/GreaterOrEqual.h ConditionalCommands/SmallerOrEqual.h)