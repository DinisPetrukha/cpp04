#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {
	private:
		std::string ideas[100];

	public:
		Brain();  // Construtor padrão
		Brain(const Brain& other);  // Construtor de cópia (para deep copy)
		Brain& operator=(const Brain& other);  // Operador de atribuição
		~Brain();  // Destrutor

		void setIdea(int index, const std::string& idea);  // Define uma ideia
		std::string getIdea(int index) const;  // Obtém uma ideia

};

#endif