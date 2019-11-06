/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMonitorDisplay.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viclucas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/02 12:00:48 by viclucas          #+#    #+#             */
/*   Updated: 2019/11/03 12:50:10 by viclucas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMonitorDisplay.hpp"

IMonitorDisplay::
IMonitorDisplay(void)
{
	this->_nbFeatures = NB_FEATURES;
	this->_Hostname = "Hostname :";
	this->_OsInfosModule = "Os Infos Module :";
	this->_Date_Time = "Date/Time :";
	this->_CPUmodule = "CPU Module :";
	this->_RAMmodule = "RAM Module :";
}

IMonitorDisplay::
~IMonitorDisplay(void)
{
	return ;
}


int			IMonitorDisplay::getNbFeatures(void) { return this->_nbFeatures;} 
std::string IMonitorDisplay::getHostname(void) {return this->_Hostname;}
std::string IMonitorDisplay::getOsInfosModule(void) {return this->_OsInfosModule;}
std::string IMonitorDisplay::getDateTime(void) {return this->_Date_Time;}
std::string IMonitorDisplay::getCPUmodule(void) {return this->_CPUmodule;}
std::string IMonitorDisplay::getRAMmodule(void) {return this->_RAMmodule;}

IMonitorDisplay &IMonitorDisplay::operator=(IMonitorDisplay const &name)
{
	this->_nbFeatures = name._nbFeatures;
	this->_Hostname = name._Hostname;
	this->_OsInfosModule = name._OsInfosModule;
	this->_Date_Time = name._Date_Time;
	this->_CPUmodule = name._CPUmodule;
	this->_RAMmodule = name._RAMmodule;
	return *this;
}

IMonitorDisplay::IMonitorDisplay(IMonitorDisplay const &name)
{
	*this = name;
}
