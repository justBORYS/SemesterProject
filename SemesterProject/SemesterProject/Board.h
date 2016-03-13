#ifndef BOARD_H
#define BOARD_H

#include <iostream>
#include <string>

namespace game
{
	class MainBoard;

	class Board
	{
	public:
		Board();
		~Board();
		std::string board[7];
	protected:
		friend MainBoard;
	private:

		bool upside_down;
		char color;

	};
}
#endif