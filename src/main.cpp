#include "logger/logger.hpp"
#include "res/AssetsLoader.hpp" 

Logger logger;
AssetsLoader aloader;

void preInitEvent(){
    logger.logEvent(LogLevel::INFO, "Starting game pre-initialization.");

    logger.logEvent(LogLevel::ERROR, "LogEvent error test");
    logger.logEvent(LogLevel::WARNING, "LogEvent warning test");
    logger.logEvent(LogLevel::DEBUG, "LogEvent debug test");
    logger.logEvent(LogLevel::INFO, "LogEvent info test");
    logger.logEvent(LogLevel::INFO, "Logger initialized.");

    aloader.initTextures();
    
    aloader.loadAssets();

    logger.logEvent(LogLevel::INFO, "Game pre-initialization completed.");
} 

void initEvent(){
    logger.logEvent(LogLevel::INFO, "Starting game initialization.");
    
    // Initialize the game here

    logger.logEvent(LogLevel::INFO, "Game initialization completed.");
}

void postInitEvent(){
    logger.logEvent(LogLevel::INFO, "Starting game post-initialization.");
    
    // Initialize the game here

    logger.logEvent(LogLevel::INFO, "Game post-initialization completed.");
}

int main(){
    preInitEvent();

    initEvent();
    
    postInitEvent();

    logger.logEvent(LogLevel::INFO, "Game started.");
    return 0;
} 