/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printInfosOnScreen.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viclucas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/02 15:22:30 by viclucas          #+#    #+#             */
/*   Updated: 2019/11/03 20:25:44 by viclucas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "init_ncurses_mode.hpp"


void	print_side_infos(t_window win)
{
	wattron(win.side, COLOR_PAIR(2));
	mvwprintw(win.side, 1, win.width_side - 28 ,  "         :::      ::::::::");
	mvwprintw(win.side, 2, win.width_side - 28,  "       :+:      :+:    :+:");
	mvwprintw(win.side, 3, win.width_side - 28, "     +:+ +:+         +:+");
	mvwprintw(win.side, 4, win.width_side - 28, "   +#+  +:+       +#+");
	mvwprintw(win.side, 5, win.width_side - 28, " +#+#+#+#+#+   +#+");
	mvwprintw(win.side, 6, win.width_side - 28, "     #+#    #+#");
	mvwprintw(win.side, 7, win.width_side - 28, "    ###   ########.fr");
	wattroff(win.side, COLOR_PAIR(2));
	
	wattron(win.side, COLOR_PAIR(4));
	mvwprintw(win.side, 40, 10, "( \\                |\\\\ ");
	mvwprintw(win.side, 41, 10, "/ /     .-`````-.   / ^`-.");
	mvwprintw(win.side, 42, 10, "\\ \\    /         \\_/  {|} `o");
	mvwprintw(win.side, 43, 10, " \\ \\  /   .---.   \\ _  ,--'");
	mvwprintw(win.side, 44, 10, "  \\ \\/   /     \\,  \( `^^^");
	mvwprintw(win.side, 45, 10, "   \\   \\/\\      (\\  )");
	mvwprintw(win.side, 46, 10, "    \\   ) \\     ) \\ \\");
	mvwprintw(win.side, 47, 10, "     ) /__ \\__  ) (\\ \\");
	mvwprintw(win.side, 48, 10, "    (___)))__))(__))(__)))");
	wattroff(win.side, COLOR_PAIR(4));

	

}


void	print_init_infos(t_window win, IMonitorDisplay a)
{
	static_cast<void>(a);
	DateTimeModule		d;
	HostNameModule		h;
	OsInfoModule		o;
	NETWORKinfoModule	net;
	CPUinfoModule		CPU;
	RAMinfoModule		RAM;
	IMonitorDisplay		id;

	wattron(win.big, COLOR_PAIR(3));
	mvwprintw(win.big, 6, win.width / 2 - 8, "%s", id.getHostname().c_str());
	mvwprintw(win.big, 11, win.width / 2 - 8, "%s", id.getOsInfosModule().c_str());
	mvwprintw(win.big, 21, win.width / 2 - 8, "%s", id.getDateTime().c_str());
	mvwprintw(win.big, 27, win.width / 2 - 8, "%s", id.getCPUmodule().c_str());
	mvwprintw(win.big, 32, win.width / 2 - 8, "%s", id.getRAMmodule().c_str());
	mvwprintw(win.big, 37, win.width / 2 - 8, "%s", NETWORK);
	wattroff(win.big, COLOR_PAIR(3));
	
	
	wattron(win.big, COLOR_PAIR(2));
	mvwprintw(win.big, 5, 1, "============================");
	mvwprintw(win.big, 5, 1, "============================");
	mvwprintw(win.big, 10, 1, "============================");
	mvwprintw(win.big, 20, 1, "============================");
	mvwprintw(win.big, 26, 1, "============================");
	mvwprintw(win.big, 31, 1, "============================");
	mvwprintw(win.big, 36, 1, "============================");
	mvwprintw(win.big, 45, 1, "============================");
	wattroff(win.big, COLOR_PAIR(2));
	

	wattron(win.big, COLOR_PAIR(5));
	mvwprintw(win.big, 7, win.width / 2 - 8, "%s", std::string(h.getHostName()).c_str());
	mvwprintw(win.big, 12, win.width / 2 - 8, "%s", o.get_sysname().c_str());
   	mvwprintw(win.big, 13, win.width/2 - 8, "%s", o.get_nodename().c_str());
   	mvwprintw(win.big, 14, win.width/2 - 8, "%s", o.get_release().c_str());
   	mvwprintw(win.big, 15, win.width/2 - 8, "%s", o.get_machine().c_str());
	mvwprintw(win.big, 22, win.width / 2 - 8, "%s", d.getDateTime());
	print_side_infos(win);
	wrefresh(win.big);
	wrefresh(win.side);
	mvwprintw(win.big, 28, win.width / 2 - 8, "%s", CPU.getCPUinfo().c_str());
	mvwprintw(win.big, 33, win.width / 2 - 8, "%s", RAM.getRAMinfo().c_str());
	mvwprintw(win.big, 38, win.width / 2 - 8, "%s", net.getNETWORKinfo().c_str());
	wattroff(win.big, COLOR_PAIR(5));
	wrefresh(win.big);
	wrefresh(win.side);
}
