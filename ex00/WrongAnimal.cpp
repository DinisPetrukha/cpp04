#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal") {
	std::cout << "WrongAnimal has been created" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) {
	*this = other;
	std::cout << "WrongAnimal copied" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
	if (this != &other)
		this->type = other.type;
	std::cout << "WrongAnimal assigned" << std::endl;
	return *this;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal has been destroyed." << std::endl;
}

void	WrongAnimal::makeSound() const {
	std::cout << "Some WrongAnimal sound..." << std::endl;
}

std::string WrongAnimal::getType() const {
	return type;
}

WrongCat::WrongCat() {
	type = "WrongCat";
	std::cout << "WrongCat created." << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
	*this = other;
	std::cout << "WrongCat copied." << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
	if (this != &other)
		this->type = other.type;
	std::cout << "WrongCat assigned." << std::endl;
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destroyed." << std::endl;
}


void WrongCat::makeSound() const {
	std::cout << "Wrong Meow? Blhaa" << std::endl;
}