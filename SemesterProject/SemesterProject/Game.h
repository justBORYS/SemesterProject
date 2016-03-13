#ifndef GAME_H
#define GAME_H

#include "Board.h"

namespace game
{
	class Game
	{
	public:
		static Game* Instance();
		bool Play();
		~Game();
	protected:
		Game();

	private:
		static Game* _instance;
	};
}
#endif 