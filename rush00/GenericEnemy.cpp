#include "Entities.hpp"
#include "GenericEnemy.hpp"
#include "ncurses.h"

GenericEnemy::GenericEnemy()
{
};

GenericEnemy::GenericEnemy(GenericEnemy const & ref)
{
	*this = ref;
};

GenericEnemy::GenericEnemy(int x, int y) : curr_x(x), curr_y(y)
{
	this->alive = 1;
}

GenericEnemy& GenericEnemy::operator= (GenericEnemy const & ref)
{
	(GenericEnemy const)ref;
	return (*this);
}
GenericEnemy::~GenericEnemy()
{
};

int		GenericEnemy::collision(int y, int x)
{
	chtype		tmp[2];
	tmp[0] = '\0';
	tmp[1] = '\0';
	mvinchnstr(y, x, tmp, 1);
	if (tmp[0] && tmp[0] != ' ' && tmp[0] != this->icon)
	{
		if(tmp[0] == '>')
		{
			endwin();
			exit(0);
		}
		this->alive = 0;
		return (1);
	}
	return (0);
}

int		GenericEnemy::update_position(int dx)
{
	if (dx)
		this->curr_x += dx;
	else if (dx == 0)
		;
	else
		this->curr_x += this->enemy_speed;
//	if (this->collision(this->curr_y, this->curr_x - 3))
//		this->alive = 0;
	if (this->collision(this->curr_y, this->curr_x - 2))
		this->alive = 0;
	if (this->collision(this->curr_y, this->curr_x - 1))
		this->alive = 0;
	if (this->collision(this->curr_y, this->curr_x))
		this->alive = 0;
	if (this->curr_x >= this->max_x + 20)
		return (this->curr_x);
	if (this->curr_x < 2)
		this->curr_x = getmaxx(stdscr);
	return (0);
}

void	GenericEnemy::set_def_position(int x, int y)
{
	this->curr_x = x;
	this->curr_y = y;
}

void	GenericEnemy::enemy_to_screen()
{
	mvaddch(this->curr_y, this->curr_x, this->icon);
}
