#pragma once

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal {

	private:
		Brain	*_brain;

	public:
		Dog(void);
		Dog(const Dog& Dog);
		~Dog(void);

		Dog&	operator=(const Dog& Dog);

		void	makeSound(void) const;

};
