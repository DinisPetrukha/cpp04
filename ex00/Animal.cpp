#include "Animal.hpp"

Animal::Animal() : type("Animal") {
	std::cout << "Animal has been created" << std::endl;
}

Animal::Animal(const Animal& other) {
	*this = other;
	std::cout << "Animal copied" << std::endl;
}

Animal& Animal::operator=(const Animal& other) {
	if (this != &other)
		this->type = other.type;
	std::cout << "Animal assigned" << std::endl;
	return *this;
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

Dog::Dog(const Dog& other) : Animal(other) {
	*this = other;
	std::cout << "Dog copied." << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
	if (this != &other)
		this->type = other.type;
	std::cout << "Dog assigned." << std::endl;
	return *this;
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

Cat::Cat(const Cat& other) : Animal(other) {
	*this = other;
	std::cout << "Cat copied." << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
	if (this != &other)
		this->type = other.type;
	std::cout << "Cat assigned." << std::endl;
	return *this;
}

Cat::~Cat() {
	std::cout << "Cat has been destroyed" << std::endl;
}

void	Cat::makeSound() const {
	std::cout << "Meow! Meow!" << std::endl;
}