#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	Animal	*animals[6];

	animals[0] = new Cat();
	animals[1] = new Dog();
	animals[2] = new Cat();
	animals[3] = new Dog();
	animals[4] = new Cat();
	animals[5] = new Dog();

	for (int i = 0; i < 6; i++)
		delete animals[i];
	return 0;
}
