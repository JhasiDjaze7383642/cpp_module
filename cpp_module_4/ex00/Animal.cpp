/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 08:48:22 by rarakoto          #+#    #+#             */
/*   Updated: 2025/01/06 11:08:33 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Default constructor of Animal called\n";
}

Animal::Animal(std::string type)
{
	std::cout << "Animal with type of " << type << " instantiated\n";
}

Animal::Animal(const Animal &other)
{
	if (this != &other)
		type = other.type;
}

Animal	&Animal::operator=(const Animal &other)
{
	if (this != &other)
		type = other.type;
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "Animal " << type << " have been destroyed\n";
}

std::string	Animal::getType(void) const
{
	return (type);
}

void	Animal::setType(std::string new_type)
{
	type = new_type;
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal are trying to make sound\n";
}
