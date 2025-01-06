/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 10:53:24 by rarakoto          #+#    #+#             */
/*   Updated: 2025/01/06 11:11:52 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "Default constructor of WrongAnimal called\n";
}

WrongAnimal::WrongAnimal(std::string type)
{
	std::cout << "WrongAnimal with type of " << type << " instantiated\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	if (this != &other)
		type = other.type;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &other)
{
	if (this != &other)
		type = other.type;
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal " << type << " have been destroyed\n";
}

std::string	WrongAnimal::getType(void) const
{
	return (type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal are trying to make sound\n";
}

void	WrongAnimal::setType(std::string new_type)
{
	type = new_type;
}
