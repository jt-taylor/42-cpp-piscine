#include "Entities.hpp"
#include "Bullet.hpp"
#include <ncurses.h>

Bullet::Bullet()
{
	this->alive = 0;
};

Bullet::Bullet(int x, int y) : curr_x(x), curr_y(y)
{
}

Bullet::Bullet(Bullet const & ref)
{
	*this = ref;
};
Bullet& Bullet::operator= (Bullet const & ref)
{
	(Bullet const)ref;
	return (*this);
}
Bullet::~Bullet()
{
};

void	Bullet::set_def_position(int x, int y)
{
	this->curr_x = x;
	this->curr_y = y;
}

int		Bullet::get_currentX()
{
	return (this->curr_x);
}
int		Bullet::get_currentY()
{
	return (this->curr_y);
}

void	Bullet::gen_to_screen()
{
	mvaddch(this->curr_y, this->curr_x, this->icon);
}

int		Bullet::collision(int y, int x)
{
	chtype		tmp[2];
	tmp[0] = '\0';
	tmp[1] = '\0';
	mvinchnstr(y, x, tmp, 1);
	if (tmp[0] && tmp[0] != ' ' && tmp[0] != this->icon)
		return (1);
	return (0);
}

int		Bullet::update_position(int dx)
{
	if (dx)
		this->curr_x += dx;
	else
		this->curr_x += this->bullet_speed;
	if (this->collision(this->curr_y, this->curr_x))
		return (this->curr_x);
	if (this->curr_x >= this->max_x + 20)
		return (this->curr_x);
	return (0);
}
