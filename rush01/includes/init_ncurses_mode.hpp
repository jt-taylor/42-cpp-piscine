/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_ncurses_mode.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viclucas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/02 12:54:50 by viclucas          #+#    #+#             */
/*   Updated: 2019/11/03 12:56:57 by viclucas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WINDOW_HPP
# define WINDOW_HPP

#define WINDOW_TOO_SMALL 1
#define NO_COLORS 1
#define NETWORK "NETWORK"
/*
#define OsInfosModule "Os Infos Module"
#define DateTime "Date/Time"
#define CPUmodule "CPU module"
#define RAMmodule "RAM module"
*/
#include "IMonitorDisplay.hpp"
#include "IMonitorModule.hpp"
#include "DateTimeModule.hpp"
#include "HostNameModule.hpp"
#include "OsInfoModule.hpp"
#include "NETWORKinfoModule.hpp"
#include "RAMinfoModule.hpp"
#include "CPUinfoModule.hpp"

# include <curses.h>
# include <stdio.h>
# include <stdlib.h>
# include <iostream>
# include <unistd.h>
# include <list>

typedef struct s_window
{
	WINDOW	*big;
	WINDOW	*side;
	WINDOW	*down;
	size_t width;
	size_t width_side;
}			t_window;

int		launcher(void);
void	print_init_infos(t_window win, IMonitorDisplay a);
void	init_interactive_mode(t_window *win);
void	ncurses(void);

#endif
