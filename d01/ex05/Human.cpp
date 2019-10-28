#include "Human.hpp"

Human::Human()
{
};
Human::~Human()
{
};

std::string		Human::identify()
{
	return (this->one_brain.identify());
}

// returns a reference to the brain object in this->
Brain&		Human::getBrain()
{
	return (this->one_brain);
}
