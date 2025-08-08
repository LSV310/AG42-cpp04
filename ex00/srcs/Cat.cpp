#include "Cat.hpp"

Cat::Cat(void): Animal()
{
	this->type = "Cat";
	std::cout << "\e[1;30mCat constructor called\e[0m" << std::endl;
	return ;
}

Cat::Cat(const Cat& Cat)
{
	if (this != &Cat)
		*this = Cat;
	std::cout << "\e[1;30mCat copy constructor called\e[0m" << std::endl;
	return ;
}

Cat::~Cat(void)
{
	std::cout << "\e[1;30mCat destructor called\e[0m" << std::endl;
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
