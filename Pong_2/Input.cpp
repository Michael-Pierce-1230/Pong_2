#include "Engine.h"

void Engine::input()
{
    // Handle the player quitting
    if (Keyboard::isKeyPressed(Keyboard::Escape))
    {
        m_Window.close();
    }

    // Handle the player moving
    if (Keyboard::isKeyPressed(Keyboard::A))
    {
        m_Bat.moveLeft();
    }
    else
    {
        m_Bat.stopLeft();
    }

    if (Keyboard::isKeyPressed(Keyboard::D))
    {
        m_Bat.moveRight();
    }
    else
    {
        m_Bat.stopRight();
    }

    if (m_Ball.getXPosition() + 25 >= 2560) {
        m_Ball.reboundSides();
    }

    if (m_Ball.getXPosition() <= 0) {
        m_Ball.reboundSides();
    }

    if (m_Ball.getYPosition() + 25 >= 1440) {
        m_Ball.hitBottom();
    }

    if (m_Ball.getYPosition() <= 0) {
        m_Ball.reboundBatOrTop();
    }

    if (m_Ball.getYPosition() + 25 >= 1400) {
        if (m_Ball.getXPosition() + 25 >= m_Bat.getXPosition() && m_Ball.getXPosition() <= m_Bat.getXPosition() + 150) {
            m_Ball.reboundBatOrTop();
        }
    }
}

//if (m_Ball.getXPosition() >= m_Bat.getXPosition() && m_Ball.getXPosition() <= m_Bat.getXPosition() + 150) {