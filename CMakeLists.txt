cmake_minimum_required(VERSION 3.13)
project(projectUpdated)

set(CMAKE_CXX_STANDARD 14)

add_executable(projectUpdated main.cpp Command.h ConditionCommand.h Expression.h Parser.cpp OpenServerCommand.cpp OpenServerCommand.h DataReaderServer.cpp DataReaderServer.h Parser.h CommandBlock.cpp CommandBlock.h DataBase.cpp DataBase.h Lexer.cpp Lexer.h FileLexer.cpp FileLexer.h StorageCommand.cpp StorageCommand.h ShuntingYard.cpp ShuntingYard.h ConditionParser.cpp ConditionParser.h Condition.h Thread.cpp Thread.h SleepCommand.cpp SleepCommand.h VarCommand.h WhileCommand.cpp WhileCommand.h Print.cpp Print.h BindCommand.h EqualsCommand.cpp EqualsCommand.h BindCommand.cpp)