#pragma once

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {

	public:
		WrongCat(void);
		WrongCat(const WrongCat& WrongCat);
		~WrongCat(void);

		WrongCat&	operator=(const WrongCat& WrongCat);

		void	makeSound(void) const;

};
