/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 08:48:22 by rarakoto          #+#    #+#             */
/*   Updated: 2025/01/06 12:47:09 by rarakoto         ###   ########.fr       */
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
	if (this != &other)
		type = other.type;
}

Dog	&Dog::operator=(const Dog &other)
{
	if (this != &other)
		type = other.type;
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
