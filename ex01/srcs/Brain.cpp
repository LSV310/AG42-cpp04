#include "../headers/Brain.hpp"

Brain::Brain(void)
{
	std::cout << "\e[1;30mBrain constructor called\e[0m" << std::endl;
	return ;
}

Brain::Brain(const Brain& Brain)
{
	std::cout << "\e[1;30mBrain copy constructor called\e[0m" << std::endl;
	if (this != &Brain)
		*this = Brain;
	return ;
}

Brain::~Brain(void)
{
	std::cout << "\e[1;30mBrain destructor called\e[0m" << std::endl;
	return ;
}

Brain&	Brain::operator=(const Brain& Brain)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = Brain.ideas[i];
	return (*this);
}
