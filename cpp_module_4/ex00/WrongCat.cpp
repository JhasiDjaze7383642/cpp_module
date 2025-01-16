/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 10:55:49 by rarakoto          #+#    #+#             */
/*   Updated: 2025/01/16 13:31:36 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
	std::cout << "New constructor of WrongCat called\n";
	setType("WrongCat");
}

WrongCat::WrongCat(std::string type) : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat instantiated\n";
	setType(type);
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal("WrongCat")
{
	if (this != &other)
		type = other.type;
}

WrongCat	&WrongCat::operator=(const WrongCat &other)
{
	if (this != &other)
		type = other.type;
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat have been destroyed\n";
}

void		WrongCat::makeSound(void) const
{
	std::cout << "Wrong Miaou\n";
}
