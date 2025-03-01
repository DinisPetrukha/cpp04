#include "Animal.hpp"

int main() {
	const int size = 20; // Exemplo: criar um array com 20 animais
	Animal* animals[size];

	// Metade Dogs, metade Cats
	for (int i = 0; i < size / 2; i++)
		animals[i] = new Dog();
	for (int i = size / 2; i < size; i++)
		animals[i] = new Cat();

	// Fazer os animais fazerem barulho
	for (int i = 0; i < size; i++)
		animals[i]->makeSound();

	// Deletar os animais e evitar memory leaks
	for (int i = 0; i < size; i++)
		delete animals[i];

	return 0;
}