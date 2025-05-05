#include "logger/logger.hpp"
#include "res/AssetsLoader.hpp" 

Logger logger;
AssetsLoader aloader;

void preInitEvent(){
    logger.logEvent(LogLevel::INFO, "Starting game initialization.");
    logger.logEvent(LogLevel::INFO, "Starting textures initialization.");
    aloader.initTextures();
    
} 

int main(){
} 