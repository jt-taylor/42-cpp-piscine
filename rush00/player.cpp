#include "Entities.hpp"
#include "player.hpp"
#include <ncurses.h>

Player::Player()
{
	this->xpos = 10;
	this->ypos = 10;
}
Player::Player(int x, int y) : xpos(x), ypos(y)
{
}
Player::Player(Player const & ref)
{
	*this = ref;
}
Player&	Player::operator= (Player const & ref)
{
	(Player const)ref;
	return (*this);
}
Player::~Player()
{
}

int			Player::getX()
{
	return (this->xpos);
}
int			Player::getY()
{
	return (this->ypos);
}

void			Player::to_screen()
{
	mvaddch(this->ypos, this->xpos, this->icon);
}

int				Player::collision(int y, int x)
{
	chtype		tmp[2];
	tmp[0] = '\0';
	tmp[1] = '\0';
	mvinchnstr(y, x, tmp, 1);
	if (tmp[0] && tmp[0] != ' ' && tmp[0] != '>')
		return (1);
	return (0);
}

int		Player::update_pos(int x, int y)
{
	if (this->collision(this->ypos, this->xpos) ||
		this->collision(this->ypos, this->xpos + 1) ||
		this->collision(this->ypos, this->xpos + 2) ||
		this->collision(this->ypos, this->xpos - 1))
		return(1);
//	if (this->collision(this->ypos + y, this->xpos + x))
//		return(1);
	this->xpos += x;
	this->ypos += y;
	if (this->xpos >= this->max_x)
		this->xpos = 1;
	else if (this->xpos < 1)
		this->xpos = this->xpos = 1;
	if (this->ypos >= this->max_y)
		this->ypos = 1;
	else if (this->ypos <= 0)
		this->ypos = this->max_y - 1;
	return (0);
}
