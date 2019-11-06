#ifndef GENERICENEMY_HPP
# define GENERICENEMY_HPP

#include "Entities.hpp"
#include <string>
#include <ncurses.h>

class GenericEnemy : public Entities
{
	public:
	GenericEnemy();
	GenericEnemy(GenericEnemy const & ref);
	GenericEnemy(int x, int y);
	~GenericEnemy();
GenericEnemy&	operator= (GenericEnemy const & ref);
	int update_position(int dx);
	int alive;
	void	set_def_position(int x, int y);
	void	enemy_to_screen();
	protected:
	int curr_x;
	int curr_y;
	int	collision(int y, int x);

private:
	static const char icon = '#';
};

#endif
