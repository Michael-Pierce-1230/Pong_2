#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;

class Bat{
    // All the private variables can only be accessed internally
    private:

        // Where is Bat
        Vector2f m_Position;

        // Of course we will need a sprite
        Sprite m_Sprite;

        // And a texture
        Texture m_Texture;

        // Which direction(s) is the player currently moving in
        bool m_LeftPressed;
        bool m_RightPressed;

        // speed in pixels per second
        float m_Speed;

        // Public functions
    public:

        // We will set Bob up in the constructor
        Bat();

        // Send a copy of the sprite to main
        Sprite getSprite();

        float getXPosition();

        // Move Bob in a specific direction
        void moveLeft();

        void moveRight();

        // Stop Bat moving in a specific direction
        void stopLeft();

        void stopRight();

        // We will call this function once every frame
        void update(float elapsedTime);

};