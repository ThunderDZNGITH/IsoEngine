#include "logger/logger.hpp"
#include "res/AssetsLoader.hpp" 

Logger logger;
AssetsLoader aloader;

int main(){
    logger.logEvent(LogLevel::INFO, "Starting game initialization.");

    aloader.initTextures();
} 