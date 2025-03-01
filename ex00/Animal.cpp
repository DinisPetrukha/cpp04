#include "Animal.hpp"

Animal::Animal() : type("Animal") {
	std::cout << "Animal has been created" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal has been destroyed" << std::endl;
}

void	Animal::makeSound() const {
	std::cout << "Some generic animal sound..." << std::endl;
}

std::string Animal::getType() const {
	return type;
}



Dog::Dog() {
	type = "Dog";
	std::cout << "Dog created." << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog destroyed." << std::endl;
}

void	Dog::makeSound() const {
	std::cout << "Woof! Woof!" << std::endl;
}



Cat::Cat() {
	type = "Cat";
	std::cout << "Cat has been created" << std::endl;
}

Cat::~Cat() {
	std::cout << "cat has been destroyed" << std::endl;
}

void	Cat::makeSound() const {
	std::cout << "Meow! Meow!" << std::endl;
}