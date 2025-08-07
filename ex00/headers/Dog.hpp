#pragma once

#include <iostream>
#include "Animal.hpp"

class Dog: public Animal {

	protected:


	public:
		Dog(void);
		Dog(const Dog& Dog);
		~Dog(void);

		Dog&	operator=(const Dog& Dog);

		void	makeSound(void) const;

};
