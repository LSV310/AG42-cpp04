#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "\e[1;30mAnimal constructor called\e[0m" << std::endl;
	return ;
}

Animal::Animal(const Animal& Animal)
{
	std::cout << "\e[1;30mAnimal copy constructor called\e[0m" << std::endl;
	if (this != &Animal)
		*this = Animal;
	return ;
}

Animal::~Animal(void)
{
	std::cout << "\e[1;30mAnimal destructor called\e[0m" << std::endl;
	return ;
}

Animal&	Animal::operator=(const Animal& Animal)
{
	this->type = Animal.type;
	return (*this);
}

std::string	Animal::getType(void) const
{
	return (this->type);
}

void	Animal::makeSound(void) const
{
	std::cout << "\e[1;36m*Animal sound*\e[0m" << std::endl;
}
