#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string.h>
#include "Brain.hpp"

class Animal {
	protected:
		std::string	type;

	public:
		Animal();
		virtual ~Animal();

		virtual void makeSound() const;
		std::string getType() const;
};

class AAnimal {
	protected:
		std::string type;

	public:
		AAnimal();
		virtual ~AAnimal();

		// Agora a função é pura virtual, tornando a classe abstrata
		virtual void makeSound() const = 0;

		std::string getType() const;
};

class Dog : public AAnimal {
	private:
		Brain* brain;

	public:
		Dog();
		Dog(const Dog& other);
		Dog& operator=(const Dog& other);
		~Dog();

		void makeSound() const;
		void setIdea(int index, const std::string& idea);
		std::string getIdea(int index) const;

};

class Cat : public AAnimal {
	private:
		Brain* brain;  // Atributo dinâmico

	public:
		Cat();
		Cat(const Cat& other);
		Cat& operator=(const Cat& other);
		~Cat();

		void makeSound() const;
		void setIdea(int index, const std::string& idea);
		std::string getIdea(int index) const;
};

#endif