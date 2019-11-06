/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viclucas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/02 12:27:43 by viclucas          #+#    #+#             */
/*   Updated: 2019/11/03 13:07:05 by viclucas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */	

#include "init_ncurses_mode.hpp" 

bool	ChooseGraphicalMode()
{
	int value;

	std::cout << "Which graphical mode do you want to use ?" << std::endl;
	std::cout << "1- Ncurses mode" << std::endl;
	std::cout << "2- SFML mode" << std::endl << "$> ";
	std::cin >> value;
	if (value == 1)
		return false;
	return true;
}

void	ncurses(void)
{
	t_window win;
	IMonitorDisplay display;

	init_interactive_mode(&win);
	print_init_infos(win, display);
	while (1)
	{
		wrefresh(win.big);
		wrefresh(win.side);
		usleep(10000);
	}
}

int	main()
{
//	bool value = ChooseGraphicalMode();
	ncurses();
	return (0);
}	
