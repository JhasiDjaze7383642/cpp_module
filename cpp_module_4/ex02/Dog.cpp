/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 08:48:22 by rarakoto          #+#    #+#             */
/*   Updated: 2025/01/06 13:31:46 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	std::cout << "New constructor of Dog called\n";
	my_brain = new Brain();
	setType("Dog");
}

Dog::Dog(const Dog &other)
{
	type = other.type;
	this->my_brain = other.my_brain;
}

Dog	&Dog::operator=(const Dog &other)
{
	unsigned int	pos;

	pos = -1;
	if (this != &other)
	{
		this->type = other.type;
		this->my_brain = other.my_brain;
	}
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog have been destroyed\n";
	delete my_brain;
}

void	Dog::makeSound(void) const
{
	std::cout << "Wouaf\n";
}
