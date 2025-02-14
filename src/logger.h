#pragma once

#include <iostream>
#include <map>
#include <string>

using namespace std;

enum LogLevel{
    All,
    Warning,
    Error,
    Off
};

class Logger{
    public:
        Logger();
        static Logger* getLogger();
        string style(string text, string styles[], int count);
        void info(string text);
        void warning(string text);
        void error(string text);
        LogLevel loglevel;
    private:
        static map<string, string> styles;
};