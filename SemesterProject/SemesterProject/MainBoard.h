#pragma once

#include <Windows.h>
#include <string>
#include "Board.h"

namespace game
{
	class MainBoard
	{
	public:
		MainBoard();
		~MainBoard();

		void Display();

	private:

		HANDLE handleConsole;
		Board activeBoards[2];
		std::string mainBoard[7];
	};
}


