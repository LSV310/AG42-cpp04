#pragma once

#include <iostream>

class Brain {

	protected:
		std::string	ideas[100];

	public:
		Brain(void);
		Brain(const Brain& Brain);
		~Brain(void);

		Brain&	operator=(const Brain& Brain);

};
