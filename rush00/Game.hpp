#ifndef GAME_HPP
# define GAME_HPP

#include <ncurses.h>
#include <random>
#include "player.hpp"

class Game
{
	public:
		Game();
		Game(Game const & ref);
Game&	operator= (Game const & ref);
		~Game();

void	init();
void	run();
int		getW(void);
int		getH(void);

	protected:
		Bullet		blist[11];
		GenericEnemy	elist[100];

	private:
		// size of the ncurses window
		int		w;
		int		h;
		int bullet_count;
		int	enemy_count;
};

#endif
