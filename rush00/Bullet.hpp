#ifndef BULLET_HPP
# define BULLET_HPP

#include "Entities.hpp"

class Bullet : public Entities
{
	public:
	Bullet();
	Bullet(int x, int y);
	Bullet(Bullet const & ref);
Bullet&	operator= (Bullet const & ref);
	~Bullet();
int	update_position(int dx);
int	alive;
void	set_def_position(int x, int y);
void	gen_to_screen();
int		get_currentX();
int		get_currentY();
int		collision(int y, int x);
	protected:
	int	curr_x;
	int	curr_y;

	private:
	static const char icon = '-';
};

#endif
