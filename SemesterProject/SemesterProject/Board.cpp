#include "Board.h"

namespace game
{
	Board::Board()
	{
		color = 'BB';

		board[0] = "----------------";
		board[6] = "----------------";

		board[1] += '|';
		board[5] += '|';

		for (int j = 0; j < 5; j++)
		{
			board[1] += this->color;
			board[1] += this->color;
			board[1] += '|';

			board[5] += this->color;
			board[5] += this->color;
			board[5] += '|';
		}
		for (int i = 2; i <= 4; i++)
		{
			board[i] += '|';
			for (int j = 0; j < 5; j++)
			{
				board[i] += "FF|";
			}
		}
	}

	Board::~Board()
	{

	}
}