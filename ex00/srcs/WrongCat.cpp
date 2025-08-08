#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	this->type = "Cat";
	std::cout << "\e[1;32mWrongCat constructor called\e[0m" << std::endl;
	return ;
}

WrongCat::WrongCat(const WrongCat& WrongCat)
{
	if (this != &WrongCat)
		*this = WrongCat;
	std::cout << "\e[1;32mWrongCat copy constructor called\e[0m" << std::endl;
	return ;
}

WrongCat::~WrongCat(void)
{
	std::cout << "\e[1;32mWrongCat destructor called\e[0m" << std::endl;
	return ;
}

WrongCat&	WrongCat::operator=(const WrongCat& WrongCat)
{
	this->type = WrongCat.type;
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "\e[1;36mWOUF\e[0m" << std::endl;
}
