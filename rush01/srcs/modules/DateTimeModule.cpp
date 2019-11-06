#include "DateTimeModule.hpp"
 	
DateTimeModule::DateTimeModule()
{
	this->get();
}
DateTimeModule::DateTimeModule(const DateTimeModule & ref)
{
	*this = ref;
}
DateTimeModule&		DateTimeModule::operator= (const DateTimeModule & ref)
{
	if (this == &ref)
		;
	return (*this);
}
DateTimeModule::~DateTimeModule()
{
}

// -----------------------------------------------------------------------------

void	DateTimeModule::update_time()
{
	time(&this->data);
}

void*	DateTimeModule::getData()
{
	return (this->getDateTime());
}

void	DateTimeModule::get()
{
	time(&this->data);
}

char*	DateTimeModule::getDateTime()
{
	return (ctime(&this->data));
}
