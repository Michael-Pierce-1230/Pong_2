#include "Ball.h"

Ball::Ball()
{
    // Associate a texture with the sprite
    m_Texture.loadFromFile("Ball.png");
    m_Sprite.setTexture(m_Texture);

    // Set the Ball starting position
    m_Position.x = 1280;
    m_Position.y = 720;

}

// Make the private spite available to the draw() function
Sprite Ball::getSprite()
{
    return m_Sprite;
}

float Ball::getXPosition()
{
    return m_Position.x;
}

float Ball::getYPosition()
{
    return m_Position.y;
}

float Ball::getXVelocity()
{
    return xVelocity;
}

void Ball::reboundSides()
{
    xVelocity = -xVelocity;
}

void Ball::reboundBatOrTop()
{
    m_Position.y -= (yVelocity * 30);
    yVelocity = -yVelocity;

}

void Ball::hitBottom()
{
    m_Position.y = 720;
    m_Position.x = 1280;
    //xVelocity = 0.0;
    m_Sprite.setPosition(m_Position);
}

// Move Bat based on the input this frame,
// the time elapsed, and the speed
void Ball::update(float elapsedTime)
{
    // Update the ball position variables
    m_Position.y += yVelocity;
    m_Position.x += xVelocity;

    // Now move the sprite to its new position
    m_Sprite.setPosition(m_Position);

}