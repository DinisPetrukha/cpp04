#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal") {
	std::cout << "WrongAnimal has been created" << std::endl;
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

WrongCat::~WrongCat() {
	std::cout << "WrongCat destroyed." << std::endl;
}

void WrongCat::makeSound() const {
	std::cout << "Wrong Meow? Blhaa" << std::endl;
}