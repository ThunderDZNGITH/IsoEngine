#include "logger.hpp"

std::string Logger::getCurrentDateTime(){
    auto now = std::chrono::system_clock::now();
    std::time_t now_c = std::chrono::system_clock::to_time_t(now);

    std::tm* tm_local = std::localtime(&now_c);

    std::ostringstream oss;
    oss << std::put_time(tm_local, "%d/%m/%y - %H:%M:%S => ");
    return oss.str();
}

std::string Logger::getLogLevel(LogLevel level){
    std::string currentLogLevel = "";
    switch(level) {
        case LogLevel::INFO:
            currentLogLevel = "INFO";
            break;
        case LogLevel::WARNING:
            currentLogLevel = "WARNING";
            break;
        case LogLevel::ERROR:
            currentLogLevel = "ERROR";
            break;
        case LogLevel::DEBUG:
            currentLogLevel = "DEBUG";
            break;
    } 
    return "["+currentLogLevel+"] ";
} 

std::string Logger::getLogColor(LogLevel level){
    std::string currentLogColor = "";
    switch(level) {
        case LogLevel::INFO:
            currentLogColor = "\033[0;37m"; // White
            break;
        case LogLevel::WARNING:
            currentLogColor = "\033[0;33m"; // Yellow
            break;
        case LogLevel::ERROR:
            currentLogColor = "\033[0;31m"; // Red
            break;
        case LogLevel::DEBUG:
            currentLogColor = "\033[0;34m"; // Blue
            break;
    } 
    return currentLogColor;
}

void Logger::logEvent(LogLevel level, std::string text){
    std::string dateTime = getCurrentDateTime();
    std::cout << getLogColor(level) << getLogLevel(level) << dateTime << text << "\033[0;37m" << std::endl;
}