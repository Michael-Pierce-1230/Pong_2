#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;

class Ball{
    // All the private variables can only be accessed internally
    private:

        // Where is Bat
        Vector2f m_Position;

        // Of course we will need a sprite
        Sprite m_Sprite;
         
        // And a texture
        Texture m_Texture;

        float xVelocity = 0.07f;
        float yVelocity = 0.07f;

    // Public functions
    public:

        // We will set Bob up in the constructor
        Ball();

        // Send a copy of the sprite to main
        Sprite getSprite();

        float getXPosition();

        float getYPosition();

        float getXVelocity();

        void reboundSides();

        void reboundBatOrTop();

        void hitBottom();

        // We will call this function once every frame
        void update(float elapsedTime);

};