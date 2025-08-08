#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "\e[1;30mWrongAnimal constructor called\e[0m" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal& WrongAnimal)
{
	if (this != &WrongAnimal)
		*this = WrongAnimal;
	std::cout << "\e[1;30mWrongAnimal copy constructor called\e[0m" << std::endl;
	return ;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "\e[1;30mWrongAnimal destructor called\e[0m" << std::endl;
	return ;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& WrongAnimal)
{
	this->type = WrongAnimal.type;
	return (*this);
}

std::string	WrongAnimal::getType(void) const
{
	return (this->type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "\e[1;36m*WrongAnimal sound*\e[0m" << std::endl;
}
