#ifndef IMONITERMODULE
# define IMONITERMODULE

#include <iostream>
#include <string>
#include <unistd.h>
#include <time.h> // for DateTimeModule
#include <limits.h> // for limit macros
#include <stdlib.h>
#include <stdio.h>
#include <sys/utsname.h> // for uname -- OsInfoModule

class IMoniterModule
{
	public:
	IMoniterModule();
	IMoniterModule(const IMoniterModule & ref);
IMoniterModule&		operator= (const IMoniterModule & ref);
	 ~IMoniterModule();
	virtual void		*getData() = 0;
	protected:
	private:
};

#endif
