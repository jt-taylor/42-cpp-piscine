/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMonitorDisplay.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viclucas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/02 11:54:02 by viclucas          #+#    #+#             */
/*   Updated: 2019/11/03 12:51:45 by viclucas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMONITORDISPLAY_HPP
# define IMONITORDISPLAY_HPP

#include <iostream>
# define NB_FEATURES 5

class IMonitorDisplay
{
	public:
		IMonitorDisplay(void);
		virtual ~IMonitorDisplay(void);
		IMonitorDisplay &operator=(IMonitorDisplay const &name);
		IMonitorDisplay(IMonitorDisplay const &name);

		int		getNbFeatures(void);
		std::string getHostname(void);
		std::string getOsInfosModule(void);
		std::string getDateTime(void);
		std::string getCPUmodule(void);
		std::string getRAMmodule(void);

	private:
		int		_nbFeatures;
		std::string _Hostname;
		std::string _OsInfosModule;
		std::string _Date_Time;
		std::string _CPUmodule;
		std::string _RAMmodule;
};

#endif
