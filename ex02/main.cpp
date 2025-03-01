#include "Animal.hpp"

int main() {
	// Não pode criar um objeto de AAnimal diretamente
	// AAnimal* animal = new AAnimal(); // Erro de compilação

	AAnimal* dog = new Dog();
	AAnimal* cat = new Cat();

	std::cout << dog->getType() << std::endl;
	std::cout << cat->getType() << std::endl;

	dog->makeSound();
	cat->makeSound();

	delete dog; // Destrói o Dog e chama o destrutor do AAnimal
	delete cat; // Destrói o Cat e chama o destrutor do AAnimal

	return 0;
}