#include "Game.hpp"
#include "player.hpp"
Game::Game(void)
{
}
Game::Game(Game const & ref)
{
	*this = ref;
}
Game&	Game::operator= (Game const & ref)
{
	(Game const)ref;
	return (*this);
}
Game::~Game(void)
{
	endwin();
}

// -----------------------------------------------------------------------------

int		Game::getW(void)
{
	return this->w;
}

int		Game::getH(void)
{
	return this->h;
}

void	Game::init(void)
{
	initscr();
	cbreak();
	noecho();
	keypad(stdscr, TRUE);
	nodelay(stdscr, TRUE);
	curs_set(0);
	getmaxyx(stdscr, this->h, this->w);
	this->bullet_count = 0;
	this->enemy_count = 0;
}

void	Game::run(void)
{
	bool		turn_me_off = false;
	int			counter = 0;
	this->init();
	Player		p1;
	while (1)
	{
		if (counter % 10 == 0)
		{
			int ch = getch();
			switch (ch)
			{
				case 's':
				case KEY_DOWN:
					turn_me_off = p1.update_pos(0,1);break;
				case 'a':
				case KEY_LEFT:
					turn_me_off = p1.update_pos(-1,0);break;
				case 'w':
				case KEY_UP:
					turn_me_off = p1.update_pos(0,-1);break;
				case 'd':
				case KEY_RIGHT:
					turn_me_off = p1.update_pos(1,0);break;
				case ' ':
				case 'k':
					{
						if (bullet_count > 9)
							break;
						this->blist[bullet_count].alive = 1;
						this->blist[bullet_count].set_def_position(p1.getX() + 3, p1.getY());
						this->bullet_count++;
						break;
					}
				case 'r':
					{
						this->bullet_count = 0;
						for(int tmp = 0;tmp < 10;tmp++)
							this->blist[tmp].alive = 0;
						break;
					}
				case 'q':
					{
						endwin();
						exit(0);
					}
				default:
					break;
			}
		}
		p1.to_screen();
		for (int i = 0;i < 10;i++)
			if (blist[i].alive)
				blist[i].gen_to_screen();
		if (counter % 2 == 0)
		{
			refresh();
			clear();
		}
		if (counter % 500 == 0)
			for (int b = 0; b < 10;b++)
			{
				if (blist[b].alive == 1)
					if (blist[b].update_position(1) >= this->w)
					{
						blist[b].alive = 1;
						// blist[b].swap(&blist[b], &blist[bullet_count - 1]);
						this->bullet_count--;
					}
			}
		//ENEMIES
		//		update current enemies
		if (counter % 500 == 0)
			for (int e = 0; e < 100; e++)
			{
				if (elist[e].alive)
			//	if (mvwgetch(stdscr, elist[e].get_currentY(), elist[e].get_currentX() - 1))
			//		COLLISION
			//	else
						elist[e].update_position(-1);
			}
		// spawn new enemies
		if (counter % 1500 == 0)
		{
			if (!(this->enemy_count >= 100)){
				this->elist[enemy_count].alive = 1;
				this->elist[enemy_count].set_def_position(getmaxx(stdscr) - 1,  rand() % getmaxy(stdscr) - 1);
				this->enemy_count++;}
		}
		for (int i = 0; i < 100; i++)
			if (elist[i].alive)
			{
				elist[i].update_position(0);
				elist[i].enemy_to_screen();
			}
		turn_me_off += p1.update_pos(0, 0);
		if (counter == 3000)
		{
			turn_me_off += p1.update_pos(-1, 0);
					clear();
			counter = 0;
		}
		counter++;
		if (turn_me_off)
				return ;
	}
}
