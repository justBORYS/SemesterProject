#include "Game.h"
#include <Windows.h>
#include <vector>
#include "MainBoard.h"

int main()
{
	//HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	//game::Game* game = game::Game::Instance();
	//if (game != nullptr)
	//{
	//	game->Play();
	//	delete game;
	//
	//}
	//else std::cout << "\nCannot start game.\n\n";

	//std::string window[24];
	//std::string board[] =
	//{
	//	"  ------------------------   ----------------     ----------------", // 0
	//	"  | PLAYER: Player1      |   |BB|BB|BB|BB|BB|     |GG|GG|GG|GG|GG|", // 1
	//	"  |                      |   |F1|F1|F1|F1|F1|     |F2|F2|F2|F2|F2|", // 2
	//	"  | TOWERS: H3 H4 H6     |   |F1|F1|F1|F1|F1|     |F2|F2|F2|F2|F2|", // 3  RED
	//	"  |         M3 M4 M6     |   |F1|F1|F1|F1|F1|     |F2|F2|F2|F2|F2|", // 4
	//	"  |         L3 L4 L6     |   |RR|RR|RR|RR|RR|     |RR|RR|RR|RR|RR|", // 5
	//	"  ------------------------   ----------------     ----------------", // 6
	//	"  ------------------------   ----------------     ----------------", // 7
	//	"  | PLAYER: Player2      |   |RR|RR|RR|RR|RR|     |BB|BB|BB|BB|BB|", // 8
	//	"  |                      |   |F2|F2|F2|F2|F2|     |F3|F3|F3|F3|F3|", // 9
	//	"  | TOWERS: H3 H4 H6     |   |F2|F2|F2|F2|F2|     |F3|F3|F3|F3|F3|", //10  GREEN
	//	"  |         M3 M4 M6     |   |F2|F2|F2|F2|F2|     |F3|F3|F3|F3|F3|", //11
	//	"  |         L3 L4 L6     |   |GG|GG|GG|GG|GG|     |GG|GG|GG|GG|GG|", //12
	//	"  ------------------------   ----------------     ----------------", //13
	//	"  ------------------------   ----------------     ----------------", //14
	//	"  | PLAYER: Player3      |   |GG|GG|GG|GG|GG|     |RR|RR|RR|RR|RR|", //15
	//	"  |                      |   |F3|F3|F3|F3|F3|     |F1|F1|F1|F1|F1|", //16
	//	"  | TOWERS: H3 H4 H6     |   |F3|F3|F3|F3|F3|     |F1|F1|F1|F1|F1|", //17  BLUE
	//	"  |         M3 M4 M6     |   |F3|F3|F3|F3|F3|     |F1|F1|F1|F1|F1|", //18
	//	"  |         L3 L4 L6     |   |BB|BB|BB|BB|BB|     |BB|BB|BB|BB|BB|", //19
	//	"  ------------------------   ----------------     ----------------"  //20
	//};
	//std::string name = "Player";
	//
	//std::string* Player1 = &board[1];
	//std::string* Player2 = &board[8];
	//std::string* Player3 = &board[15];

	//std::cout << "Name of the 1st. Player: ";
	//std::getline(std::cin, name);
	//if (name != "")
	//{
	//	for (int i = name.length(); i < 12; i++)
	//	{
	//		name += " ";
	//	}
	//	Player1->erase(12, name.length());
	//	Player1->insert(12, name);
	//}

	//std::cout << "Name of the 2nd. Player: ";
	//std::getline(std::cin, name);
	//if (name != "")
	//{
	//	for (int i = name.length(); i < 12; i++)
	//	{
	//		name += " ";
	//	}
	//	Player2->erase(12, name.length());
	//	Player2->insert(12, name);
	//}
	//std::cout << "Name of the 3rd. Player: ";
	//std::getline(std::cin, name);
	//if (name != "")
	//{
	//	for (int i = name.length(); i < 12; i++)
	//	{
	//		name += " ";
	//	}
	//	Player3->erase(12, name.length());
	//	Player3->insert(12, name);
	//}

	//system("cls");
	//for (int i = 0; i < 21; i++)
	//{
	//	for (int j = 0; j < board[i].length(); j++)
	//	{
	//		if (j > 29 && j < 45 || j > 50 && j < 65)
	//		{
	//			if (board[i][j] == 'F')
	//			{
	//				if (board[i][j + 1] == '1' || board[i][j + 1] == '2' || board[i][j + 1] == '3')
	//				{
	//					board[i][j] = ' ';
	//					board[i][j + 1] = ' ';
	//				}
	//			}
	//			if (j < 44 || j > 50)
	//			{
	//				if ( i > 0 && i < 6 || i > 7 && i < 13 || i > 14 && i < 20)
	//				switch (board[i][j])
	//				{
	//				case 'R':
	//					board[i][j] = ' ';
	//					SetConsoleTextAttribute(hConsole, 0xCC);
	//					break;
	//				case 'G':
	//					board[i][j] = ' ';
	//					SetConsoleTextAttribute(hConsole, 0xAA);
	//					break;
	//				case 'B':
	//					board[i][j] = ' ';
	//					SetConsoleTextAttribute(hConsole, 0x99);
	//					break;
	//				case ' ':
	//					SetConsoleTextAttribute(hConsole, 0x77);
	//					break;
	//				default:
	//					SetConsoleTextAttribute(hConsole, 0x70);
	//					break;
	//				}
	//			}
	//			}
	//			
	//		else
	//		{
	//			if (j >= 12 && j < 25)
	//			{
	//				if (i > 0 && i < 6)
	//				{
	//					SetConsoleTextAttribute(hConsole, 0xC);
	//				}
	//				else if (i > 7 && i < 13)
	//				{
	//					SetConsoleTextAttribute(hConsole, 0xA);
	//				}
	//				else if (i > 14 && i < 20) SetConsoleTextAttribute(hConsole, 0x9);
	//			}
	//		}
	//		std::cout << board[i][j];
	//		SetConsoleTextAttribute(hConsole, 0x7);
	//	}
	//	std::cout << "\n";
	//}
	game::MainBoard board;
	board.Display();

	return 0;
}