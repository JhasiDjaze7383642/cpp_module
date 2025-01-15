/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 16:51:14 by rarakoto          #+#    #+#             */
/*   Updated: 2025/01/15 17:44:42 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	std::cout << "Ice at addr [" << this << "]: was just instantiated\n";
};

Ice::Ice(const Ice &other) : AMateria("ice")
{
	std::cout << "Ice at addr [" << this << "]: was copied from Ice addr [" << &other << "]\n";
};

Ice	&Ice::operator=(const Ice &other)
{
	if (this != &other)
	{};
	return (*this);
};

AMateria	*Ice::clone(void) const
{
	return (new Ice());
};

void	use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}

Ice::~Ice(void)
{
	std::cout << "Ice at addr [" << this << "]: was destroyed\n";
}
