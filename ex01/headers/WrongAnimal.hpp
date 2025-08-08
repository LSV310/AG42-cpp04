#pragma once

#include <iostream>

class WrongAnimal {

	protected:
		std::string	type;

	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal& WrongAnimal);
		~WrongAnimal(void);

		WrongAnimal&	operator=(const WrongAnimal& WrongAnimal);

		std::string	getType(void) const;
		void		makeSound(void) const;

};
