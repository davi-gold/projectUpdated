cmake_minimum_required(VERSION 3.13)
project(projectUpdated)

set(CMAKE_CXX_STANDARD 14)

add_executable(projectUpdated main.cpp Translator.cpp Translator.h Command.h UnaryExp.h BinaryExp.cpp BinaryExp.h Addition.h ConditionCommand.h Division.h Multiply.h MyExpression.h Substruction.h Num.h)