#pragma once

#include <iostream>

class Animal {

	protected:
		std::string	type;

	public:
		Animal(void);
		Animal(const Animal& Animal);
		~Animal(void);

		Animal&	operator=(const Animal& Animal);

		std::string		getType(void) const;
		virtual void	makeSound(void) const;

};
