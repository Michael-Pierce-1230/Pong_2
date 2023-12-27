#include "Bat.h"

Bat::Bat()
{
    // How fast does Bat move?
    m_Speed = 700;

    // Associate a texture with the sprite
    m_Texture.loadFromFile("Bat.png");
    m_Sprite.setTexture(m_Texture);

    // Set the Bat's starting position
    m_Position.x = 500;
    m_Position.y = 1400;

}

// Make the private spite available to the draw() function
Sprite Bat::getSprite()
{
    return m_Sprite;
}

float Bat::getXPosition()
{
    return m_Position.x;
}

void Bat::moveLeft()
{
    if (m_Position.x <= 0) {
        m_LeftPressed = false;
    }
    else {
        m_LeftPressed = true;
    }
    
}

void Bat::moveRight()
{
    if (m_Position.x + 150 >= 2560) {

        m_RightPressed = false;
    }
    else {
        m_RightPressed = true;
    }
}

void Bat::stopLeft()
{
    m_LeftPressed = false;
}

void Bat::stopRight()
{
    m_RightPressed = false;
}

// Move Bat based on the input this frame,
// the time elapsed, and the speed
void Bat::update(float elapsedTime)
{
    if (m_RightPressed)
    {
        m_Position.x += m_Speed * elapsedTime;
    }

    if (m_LeftPressed)
    {
        m_Position.x -= m_Speed * elapsedTime;
    }

    // Now move the sprite to its new position
    m_Sprite.setPosition(m_Position);

}