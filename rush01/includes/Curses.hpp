/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   curses.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viclucas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/03 10:22:18 by viclucas          #+#    #+#             */
/*   Updated: 2019/11/03 10:26:12 by viclucas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURSES_HPP
#define CURSES_HPP

class Curses.hpp : IMonitorDisplay
{
	public:
		Curses(void);
		~Curses(void);
		Curses(Curses const & name);
		Curses operator=(Curses const & name);
}

#endif
