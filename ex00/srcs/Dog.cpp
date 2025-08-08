#include "Dog.hpp"

Dog::Dog(void): Animal()
{
	this->type = "Dog";
	std::cout << "\e[1;33mDog constructor called\e[0m" << std::endl;
	return ;
}

Dog::Dog(const Dog& Dog)
{
	if (this != &Dog)
		*this = Dog;
	std::cout << "\e[1;33mDog copy constructor called\e[0m" << std::endl;
	return ;
}

Dog::~Dog(void)
{
	std::cout << "\e[1;33mDog destructor called\e[0m" << std::endl;
	return ;
}

Dog&	Dog::operator=(const Dog& Dog)
{
	this->type = Dog.type;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "\e[1;36mWOUF\e[0m" << std::endl;
}
