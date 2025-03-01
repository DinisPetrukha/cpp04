#include "Animal.hpp"
#include "WrongAnimal.hpp"

int main()
{
	// const Animal* meta = new Animal();
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	// std::cout << j->getType() << " " << std::endl;
	// std::cout << i->getType() << " " << std::endl;
	// i->makeSound(); //will output the cat sound!
	// j->makeSound(); //will output the dog sound!
	// meta->makeSound();

	// <--- MY TEST --->
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;

	cat->makeSound();
	dog->makeSound();
	meta->makeSound();

	delete meta;
	delete dog;
	delete cat;

	std::cout << "---- Testing WrongAnimal ----" << std::endl;

	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();

	std::cout << wrongCat->getType() << " " << std::endl;
	wrongCat->makeSound();  // Vai chamar WrongAnimal::makeSound(), pois não é virtual

	delete wrongMeta;
	delete wrongCat;

	return 0;
}