#include "Cat.hpp"

Cat::Cat(void): Animal()
{
	this->type = "Dog";
	std::cout << "" << std::endl;
	return ;
}

Cat::Cat(const Cat& Cat)
{
	if (this != &Cat)
		*this = Cat;
	return ;
}

Cat::~Cat(void)
{
	return ;
}

Cat&	Cat::operator=(const Cat& Cat)
{
	this->type = Cat.type;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "MIAAAOOUU" << std::endl;
}
