#ifndef ENTITIES_HPP
#define ENTITIES_HPP

class Entities
{
	public:
		Entities();
		Entities(Entities const & ref);
Entities&	operator= (Entities const & ref);
		~Entities();

//virtual void	update_entity() = 0;
//virtual void	render_entity() = 0;
// collision check ?

void	updatePosition(int x, int y);

virtual int		get_currentX();
virtual int		get_currentY();
void	gen_to_screen();
virtual int		collision(int y, int x);

	protected:
//int				global_frame_counter;
int				curr_x;
int				curr_y;
	int		max_x;
	int		max_y;
	char icon;
	static const int bullet_speed = 4;
	static const int enemy_speed = 2;

	private:
};

#include "player.hpp"
#include "GenericEnemy.hpp"
#include "Bullet.hpp"

#endif
