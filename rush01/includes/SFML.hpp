/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   curses.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viclucas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/03 10:22:18 by viclucas          #+#    #+#             */
/*   Updated: 2019/11/03 10:55:27 by viclucas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SFML_HPP
#define SFML_HPP

#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include "IMonitorDisplay.hpp"

class SFML : IMonitorDisplay
{
	public:
		SFML(void);
		~SFML(void);
		SFML(SFML const & name);
		SFML operator=(SFML const & name);
};

#endif
