#ifndef PLAYER_HPP
# define PLAYER_HPP

#include "Entities.hpp"
#include <string>

class Player : public Entities
{
	public:
	Player();
	Player(int x, int y);
	Player(Player const & ref);
	~Player();
Player&	operator= (Player const & ref);

//int	collision(int y, int x);
int	update_pos(int x, int y);

int	getX();
int	getY();
void	to_screen();
int		collision(int y, int x);
	protected:

	private:
		int xpos;
		int ypos;
		static const char	icon = '>';
};

#endif
