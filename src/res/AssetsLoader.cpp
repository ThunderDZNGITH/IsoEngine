#include "AssetsLoader.hpp"

void AssetsLoader::initTextures(){
    logger.logEvent(LogLevel::INFO, "Starting textures initialization.");
    
    if (!tileset.loadFromFile("assets/IsoTiles.png")) {
        logger.logEvent(LogLevel::ERROR, "Could'nt load IsoTiles.png");
        return;
    }

    logger.logEvent(LogLevel::INFO, "Textures initialization completed.");
} 

void AssetsLoader::loadAsset(Asset asset, std::string assetName) {
    // Load the texture from the tileset
    if (!asset.texture.loadFromImage(tileset.copyToImage(), sf::IntRect(asset.derivX, asset.derivZ, asset.sizeX, asset.sizeZ))) {
        logger.logEvent(LogLevel::ERROR, "Could'nt load asset : " + assetName);
        return;
    }
    logger.logEvent(LogLevel::INFO, "Asset loaded : " + assetName);
}

void AssetsLoader::loadAssets(){
    logger.logEvent(LogLevel::INFO, "Starting assets loading.");

    grass.derivX = 0;
    grass.derivZ = 0;
    loadAsset(grass, "grass");

    snowy_grass.derivX = 1*32;
    snowy_grass.derivZ = 0;
    loadAsset(snowy_grass, "snowy_grass");

    dirt.derivX = 0;
    dirt.derivZ = 1*32;
    loadAsset(dirt, "dirt");

    sand.derivX = 0;
    sand.derivZ = 2*32;
    loadAsset(sand, "sand");

    water.derivX = 2*32;
    water.derivZ = 0;
    loadAsset(water, "water");

    left_farm_soil.derivX = 2*32;
    left_farm_soil.derivZ = 1*32;
    loadAsset(left_farm_soil, "left_farm_soil");

    right_farm_soil.derivX = 2*32;
    right_farm_soil.derivZ = 2*32;
    loadAsset(right_farm_soil, "right_farm_soil");

    logger.logEvent(LogLevel::INFO, "Assets loading completed.");
} 
