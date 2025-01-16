/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 08:48:22 by rarakoto          #+#    #+#             */
/*   Updated: 2025/01/16 13:40:14 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
	std::cout << "New constructor of Cat called\n";
	my_brain = new Brain();
	setType("Cat");
}

Cat::Cat(const Cat &other) : Animal("Cat")
{
	this->type = other.type;
	this->my_brain = other.my_brain;
}

Cat	&Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		this->type = other.type;
		this->my_brain = other.my_brain;
	}
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat have been destroyed\n";
	delete my_brain;
}

void	Cat::makeSound(void) const
{
	std::cout << "Miaou\n";
}
