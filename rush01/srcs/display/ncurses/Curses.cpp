/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   curses.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viclucas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/03 10:22:09 by viclucas          #+#    #+#             */
/*   Updated: 2019/11/03 10:49:31 by viclucas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Curses::
Curses(void) {
}

Curses::
~Curses(void) {
}

Curses::
Curses(Curses const &name)
{
	*this = name;
}

Curses::
&operator=(Curses const &name)
{
	return *this;
}
