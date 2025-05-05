#include "AssetsLoader.hpp"

void AssetsLoader::initTextures(){
    if (!tileset.loadFromFile("assets/IsoTiles.png")) {
        logger.logEvent(LogLevel::ERROR, "Could'nt load IsoTiles.png");
        return;
    }
    logger.logEvent(LogLevel::INFO, "Textures initialization completed.");
} 

void AssetsLoader::loadAssets(){
    loadAsset(grass);
} 
