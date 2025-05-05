#pragma once 
#include <SFML/Graphics.hpp>
#include "../logger/logger.hpp" 

/**
 * Asset : structure
 * @brief Define an asset.  
 */
struct Asset {
    sf::Texture texture;    //  Asset's texture
    int sizeX;              //  Asset's size in X
    int sizeZ;              //  Asset's size in Z
    int derivX;             //  Asset's X deviation from 0, 0
    int derivZ;             //  Asset's Z deviation from 0, 0
};

/**
 * Assets : enum
 * @brief Enumartion of all the assets. 
 *
enum Assets {
    grass,
    snow_grass,
    dirt,
};*/


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
    Asset grass;


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
     */
    void loadAsset(Asset asset);

};