#include "Game.h"

namespace game
{
	Game* Game::_instance = nullptr;

	Game* Game::Instance()
	{
		if (_instance == nullptr)
		{
			_instance = new Game;
		}
		return _instance;
	}
	bool game::Game::Play()
	{
		std::string command;

		return false;
	}
	Game::Game()
	{

	}

	Game::~Game()
	{

	}

}