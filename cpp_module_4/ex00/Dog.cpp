/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 08:48:22 by rarakoto          #+#    #+#             */
/*   Updated: 2025/01/03 09:11:39 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	std::cout << "New constructor of Dog called\n";
}

Dog::Dog(std::string type) : Animal("Dog")
{
	std::cout << "Dog instantiated\n";
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
}

void	Dog::makeSound(void) const
{
	std::cout << "Miaou\n";
}
