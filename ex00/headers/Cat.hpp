#pragma once

#include <iostream>
#include "Animal.hpp"

class Cat: public Animal {

	protected:


	public:
		Cat(void);
		Cat(const Cat& Cat);
		~Cat(void);

		Cat&	operator=(const Cat& Cat);

		void	makeSound(void) const;

};
