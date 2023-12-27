#include "Engine.h"

using namespace sf;

void Engine::update(float dtAsSeconds)
{
    m_Bat.update(dtAsSeconds);
    m_Ball.update(dtAsSeconds);
}