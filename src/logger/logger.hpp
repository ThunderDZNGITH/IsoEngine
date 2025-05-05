#pragma once
#include <iostream>
#include <chrono>
#include <iomanip>  

enum LogLevel {
    INFO,
    WARNING,
    ERROR,
    DEBUG
};

class Logger{

public:

    void logEvent(LogLevel level, std::string text);

private:
    std::string getCurrentDateTime();

    std::string getLogLevel(LogLevel level);
    std::string getLogColor(LogLevel level);

};