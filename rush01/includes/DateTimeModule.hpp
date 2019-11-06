#ifndef DATETIMEMODULE_HPP
# define DATETIMEMODULE_HPP

#include "IMonitorModule.hpp"

class DateTimeModule : public IMoniterModule
{
	public:
	DateTimeModule();
	DateTimeModule(const DateTimeModule & ref);
	DateTimeModule&		operator= (const DateTimeModule & ref);
	~DateTimeModule();
	void			get();
	void			update_time();
	void*	getData();
	char*	getDateTime();
	protected:
	private:
	time_t data;
};

#endif
