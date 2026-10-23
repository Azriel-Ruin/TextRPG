#include "Game.h"
#include "Logger.h"
Game::Game(): m_ISRunnin{true}
{
}

Game::~Game()
{
}

void Game::Run()
{
    if (!Init())
        m_ISRunnin = false;

    while (m_ISRunnin)
    {
        ProcessInputs();
        Update();
        Draw();
    }
}

bool Game::Init()
{
    return true;
}

void Game::ProcessInputs()
{
    
}

void Game::Update()
{
    
}

void Game::Draw()
{
}
