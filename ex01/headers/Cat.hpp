#pragma once

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal {

	private:
		Brain	*_brain;

	public:
		Cat(void);
		Cat(const Cat& Cat);
		~Cat(void);

		Cat&	operator=(const Cat& Cat);

		void	makeSound(void) const;

};
