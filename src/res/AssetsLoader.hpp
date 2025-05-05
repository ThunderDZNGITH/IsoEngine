#pragma once 
#include <SFML/Graphics.hpp>
#include "../logger/logger.hpp" 

struct Asset {
    sf::Texture texture;
    int sizeX;
    int sizeZ;
    int derivX;
    int derivZ;
};

class AssetsLoader {

public:

    Logger logger;

    Asset grass;

    void initTextures();

    void loadAssets();

private:

    sf::Texture tileset;

    void loadAsset(Asset asset);

};