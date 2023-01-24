#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	Animal* meta = new Animal();
	Animal* j = new Dog();
	Animal* i = new Cat();
	WrongAnimal *wa = new WrongAnimal();
	WrongAnimal *wc = new WrongCat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << wc->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	wa->makeSound();
	wc->makeSound();
	return 0;
}