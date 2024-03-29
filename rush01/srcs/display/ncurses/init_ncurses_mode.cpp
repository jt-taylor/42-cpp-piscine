/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ncurses.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viclucas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/02 12:44:16 by viclucas          #+#    #+#             */
/*   Updated: 2019/11/03 12:58:49 by viclucas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "init_ncurses_mode.hpp"

WINDOW			*create_newwin(int height, int width, int starty, int startx)
{
	WINDOW *local_win;

	local_win = newwin(height, width, starty, startx);
	box(local_win, 0, 0);
	return (local_win);
}


void		close_win(void)
{
	curs_set(1);
	getch();
	endwin();
	exit(1);
}

void			error_handler_inter(int error)
{
	endwin();
	if (error == 1)
	{
		std::cout << "This terminal window is too small, " << std::endl;
		std::cout << "please expend it for decent visibility" << std::endl;
	}
	if (error == 2)
		std::cout << "This terminal doesn't support colors" << std::endl;
	close_win();
	exit(error);
}

void			set_up_colors(void)
{
	init_pair(1, COLOR_RED, COLOR_BLACK);
	init_pair(2, COLOR_GREEN, COLOR_BLACK);
	init_pair(3, COLOR_YELLOW, COLOR_BLACK);
	init_pair(4, COLOR_BLUE, COLOR_BLACK);
	init_pair(5, COLOR_MAGENTA, COLOR_BLACK);
	init_pair(6, COLOR_CYAN, COLOR_BLACK);
	init_pair(0, COLOR_WHITE, COLOR_BLACK);
}

void			init_win_data(t_window *win)
{
	int i;

	i = 0;
	win->big = create_newwin(LINES -1, COLS * 0.30, LINES - LINES + 1, COLS - COLS + 1);
	mvwprintw(win->big, 0, (COLS * 0.8) / 2 - 11, "%s", " - Instance - ");
	win->side = create_newwin(LINES -1,
			COLS * 0.70 - 1, LINES - LINES + 1, COLS * 0.30 + 1);
	win->width = COLS * 0.30;
	win->width_side = COLS * 0.70;
}

void	init_interactive_mode(t_window *win)
{
	initscr();
	start_color();
	set_up_colors();
	cbreak();
	nodelay(stdscr, TRUE);
	keypad(stdscr, TRUE);
	noecho();
	curs_set(0);
	if (COLS < 90 || LINES < 20)
		error_handler_inter(WINDOW_TOO_SMALL);
	else if (has_colors() == FALSE)
		error_handler_inter(NO_COLORS);
	init_win_data(win);
}
