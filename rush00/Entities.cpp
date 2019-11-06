#include "Entities.hpp"
//for getmaxyx(..)
#include <ncurses.h>

// -----------------------------------------------------------------------------
Entities::Entities()
{
	getmaxyx(stdscr, this->max_y, this->max_x);
}
Entities::Entities(Entities const & ref)
{
	*this = ref;
}
Entities&	Entities::operator= (Entities const & ref)
{
	(Entities const)ref;
	return (*this);
}
Entities::~Entities()
{
}

// -----------------------------------------------------------------------------

int				Entities::collision(int y, int x)
{
	chtype		tmp[2];
	tmp[0] = '\0';
	tmp[1] = '\0';
	mvinchnstr(y, x, tmp, 1);
	if (tmp[0] && tmp[0] != ' ')
		return (1);
	return (0);
}

void		Entities::updatePosition(int x, int y)
{
	this->curr_x = x;
	this->curr_y = y;
}

int			Entities::get_currentX()
{
	return (this->curr_x);
}

void	Entities::gen_to_screen()
{
	mvaddch(this->curr_y, this->curr_x, this->icon);
}

int			Entities::get_currentY()
{
	return (this->curr_y);
}
