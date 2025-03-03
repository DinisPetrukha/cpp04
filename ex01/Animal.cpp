#include "Animal.hpp"
#include "Brain.hpp"

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


// <------- DOGGY ------->
Dog::Dog() {
	this->type = "Dog";
	this->brain = new Brain();  // Criando um novo cérebro
	std::cout << "Dog created!" << std::endl;
}

// Construtor de cópia (Deep Copy)
Dog::Dog(const Dog& other) : Animal(other) {
	this->brain = new Brain(*other.brain);  // Criando cópia profunda do cérebro
	std::cout << "Dog copied!" << std::endl;
}

// Operador de atribuição (Deep Copy)
Dog& Dog::operator=(const Dog& other) {
	std::cout << "Dog assigned!" << std::endl;
	if (this != &other) {
		Animal::operator=(other);
		delete this->brain;  // Evita vazamento de memória
		this->brain = new Brain(*other.brain);  // Criando nova cópia do cérebro
	}
	return *this;
}

// Destrutor
Dog::~Dog() {
	delete this->brain;  // Liberando memória
	std::cout << "Dog destroyed!" << std::endl;
}

// Método para fazer som
void Dog::makeSound() const {
	std::cout << "Woof! Woof!" << std::endl;
}

// Métodos para acessar o Brain
void Dog::setIdea(int index, const std::string& idea) {
	brain->setIdea(index, idea);
}

std::string Dog::getIdea(int index) const {
	return brain->getIdea(index);
}


// < ----- Kittyyy ----- >

// Construtor padrão
Cat::Cat() {
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "Cat created!" << std::endl;
}

// Construtor de cópia (Deep Copy)
Cat::Cat(const Cat& other) : Animal(other) {
	this->brain = new Brain(*other.brain);
	std::cout << "Cat copied!" << std::endl;
}

// Operador de atribuição (Deep Copy)
Cat& Cat::operator=(const Cat& other) {
	std::cout << "Cat assigned!" << std::endl;
	if (this != &other) {
		Animal::operator=(other);
		delete this->brain;
		this->brain = new Brain(*other.brain);
	}
	return *this;
}

// Destrutor
Cat::~Cat() {
	delete this->brain;
	std::cout << "Cat destroyed!" << std::endl;
}

// Método para fazer som
void Cat::makeSound() const {
	std::cout << "Meow! Meow!" << std::endl;
}

// Métodos para acessar o Brain
void Cat::setIdea(int index, const std::string& idea) {
	brain->setIdea(index, idea);
}

std::string Cat::getIdea(int index) const {
	return brain->getIdea(index);
}