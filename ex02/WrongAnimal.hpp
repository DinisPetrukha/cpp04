#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string.h>

class WrongAnimal {
	protected:
		std::string	type;

	public:
		WrongAnimal();
		~WrongAnimal();

		void makeSound() const;
		std::string getType() const;
};



class WrongCat : public WrongAnimal {
	public:
		WrongCat();
		~WrongCat();
		void makeSound() const;  // Não é virtual
	};

#endif