#pragma once 
#include <SFML/Graphics.hpp>
#include "../logger/logger.hpp" 

/**
 * Asset : structure
 * @brief Define an asset.  
 */
struct Asset {
    sf::Texture texture;    //  Asset's texture
    int sizeX = 32;         //  Asset's size in X
    int sizeZ = 32;         //  Asset's size in Z
    int derivX = 0;         //  Asset's X deviation from 0, 0
    int derivZ = 0;         //  Asset's Z deviation from 0, 0
};

/**
 * AssetsLoader : class
 */
class AssetsLoader {

public:

    // Logger instance
    Logger logger;

    /**
     * Assets definition
     */
    Asset grass, snowy_grass, dirt, sand, water;
    Asset left_farm_soil, right_farm_soil;

    Asset brick;

    Asset top_wood_log, left_wood_log, right_wood_log;
    Asset top_wood_plank, left_wood_plank, right_wood_plank;
    Asset leaves;
    
    Asset stone;
    Asset coal_ore, copper_ore, boxite_ore, iron_ore, gold_ore, titane_ore;

    Asset selector;

    /**
     * initTextures
     * @brief Initialize textures from files.
     */
    void initTextures();
    /**
     * loadAssets
     * @brief Load all assets.
     */
    void loadAssets();

private:

    sf::Texture tileset;

    /**
     * loadAsset : void
     * @brief Load asset from a texture.
     * @param asset 
     * @param assetName
     */
    void loadAsset(Asset asset, std::string assetName = "default");

};