/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 08:48:22 by rarakoto          #+#    #+#             */
/*   Updated: 2025/01/16 13:27:39 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
	std::cout << "New constructor of Cat called\n";
	setType("Cat");
}

Cat::Cat(std::string type) : Animal("Cat")
{
	std::cout << "Cat instantiated\n";
	this->type = type;
	setType("Cat");
}

Cat::Cat(const Cat &other) : Animal("Cat")
{
	if (this != &other)
		type = other.type;
}

Cat	&Cat::operator=(const Cat &other)
{
	if (this != &other)
		type = other.type;
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat have been destroyed\n";
}

void	Cat::makeSound(void) const
{
	std::cout << "Miaou\n";
}
