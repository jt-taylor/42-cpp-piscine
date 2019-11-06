#include "IMonitorModule.hpp"

IMoniterModule::IMoniterModule()
{
}
IMoniterModule::IMoniterModule(const IMoniterModule & ref)
{
	*this = ref;
}
IMoniterModule&		IMoniterModule::operator= (const IMoniterModule & ref)
{
	if (this == &ref)
		;
	return (*this);
}
IMoniterModule::~IMoniterModule()
{
}

// -----------------------------------------------------------------------------
