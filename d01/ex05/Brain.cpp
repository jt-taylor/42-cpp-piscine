#include "Brain.hpp"
#include <iostream>
#include <sstream>

Brain::Brain(void)
{
}
Brain::~Brain(void)
{
}

//i coudnt't get ::addressof to work so using ::stringstream
std::string		Brain::identify()
{
	//make a string stream
	std::stringstream		creek;
	//read the pointer of the current object into into the stream
	creek << this;
	//return the stream as a string
	return (creek.str());
}
