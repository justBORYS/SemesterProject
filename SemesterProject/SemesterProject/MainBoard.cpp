#include "MainBoard.h"


namespace game
{
	MainBoard::MainBoard()
	{
		this->handleConsole = GetStdHandle(STD_OUTPUT_HANDLE);

		this->mainBoard[0] = "  ------------------------   " + this->activeBoards[0].board[0] + "     " + this->activeBoards[1].board[0];
		this->mainBoard[1] = "  | PLAYER: Player1      |   " + this->activeBoards[0].board[1] + "     " + this->activeBoards[1].board[1];
		this->mainBoard[2] = "  |                      |   " + this->activeBoards[0].board[2] + "     " + this->activeBoards[1].board[2];
		this->mainBoard[3] = "  | TOWERS: H3 H4 H6     |   " + this->activeBoards[0].board[3] + "     " + this->activeBoards[1].board[3];
		this->mainBoard[4] = "  |         M3 M4 M6     |   " + this->activeBoards[0].board[4] + "     " + this->activeBoards[1].board[4];
		this->mainBoard[5] = "  |         L3 L4 L6     |   " + this->activeBoards[0].board[5] + "     " + this->activeBoards[1].board[5];
		this->mainBoard[6] = "  ------------------------   " + this->activeBoards[0].board[6] + "     " + this->activeBoards[1].board[6];
	}

	MainBoard::~MainBoard()
	{
	}
	void MainBoard::Display()
	{
		system("cls");
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < this->mainBoard[i].length(); j++)
			{
				if (j > 29)
				{
					if (this->mainBoard[i][j] == 'F')
					{
						this->mainBoard[i][j] = ' ';
					}
				}
				std::cout << this->mainBoard[i][j];
			}
			std::cout << "\n";
		}
	}
}

