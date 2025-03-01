#include "Brain.hpp"

// Construtor padrão
Brain::Brain() {
	std::cout << "Brain created!" << std::endl;
}

// Construtor de cópia (Deep Copy)
Brain::Brain(const Brain& other) {
	std::cout << "Brain copied!" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
}

// Operador de atribuição (Deep Copy)
Brain& Brain::operator=(const Brain& other) {
	std::cout << "Brain assigned!" << std::endl;
	if (this != &other) {  // Evita auto-atribuição
		for (int i = 0; i < 100; i++)
			this->ideas[i] = other.ideas[i];
	}
	return *this;
}

// Destrutor
Brain::~Brain() {
	std::cout << "Brain destroyed!" << std::endl;
}

// Define uma ideia
void Brain::setIdea(int index, const std::string& idea) {
	if (index >= 0 && index < 100)
		ideas[index] = idea;
}

// Obtém uma ideia
std::string Brain::getIdea(int index) const {
	if (index >= 0 && index < 100)
		return ideas[index];
	return "";
}
