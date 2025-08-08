#include "Cat.hpp"

Cat::Cat(void): Animal()
{
	std::cout << "\e[1;30mCat constructor called\e[0m" << std::endl;
	this->type = "Cat";
	this->_brain = new Brain();
	return ;
}

Cat::Cat(const Cat& Cat)
{
	std::cout << "\e[1;30mCat copy constructor called\e[0m" << std::endl;
	if (this != &Cat)
		*this = Cat;
	return ;
}

Cat::~Cat(void)
{
	std::cout << "\e[1;30mCat destructor called\e[0m" << std::endl;
	delete this->_brain;
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
