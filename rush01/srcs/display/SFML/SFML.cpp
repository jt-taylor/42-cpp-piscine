/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   curses.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viclucas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/03 10:22:09 by viclucas          #+#    #+#             */
/*   Updated: 2019/11/03 11:22:26 by viclucas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

SFML::
SFML(void) {
}

SFML::
~SFML(void) {
}

SFML::
SFML(SFML const &name)
{
	*this = name;
}

SFML::
&operator=(SFML const &name)
{
	return *this;
}
