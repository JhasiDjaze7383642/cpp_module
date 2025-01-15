/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 17:33:01 by rarakoto          #+#    #+#             */
/*   Updated: 2025/01/15 17:43:25 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	std::cout << "Cure located at addr [" << this << "]: was just instantiated\n";
};

Cure::Cure(const Cure &other) : AMateria("cure")
{
	std::cout << "Cure located at addr [" << this << "]: was copied from Cure addr [" << &other << "]\n";
};

Cure	&Cure::operator=(const Cure &other)
{
	if (this != &other)
	{};
	return (*this);
};

AMateria	*Cure::clone(void) const
{
	return (new Cure());
};

void	use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
}

Cure::~Cure(void)
{
	std::cout << "Cure located at addr [" << this << "]: was destroyed\n";
}
