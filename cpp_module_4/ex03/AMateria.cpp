/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 16:30:38 by rarakoto          #+#    #+#             */
/*   Updated: 2025/01/15 17:42:13 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : type("")
{
	std::cout << "AMateria[" << this << "]: was just created\n";
};

AMateria::AMateria(std::string const &type)
{
	this->type = type;
	std::cout << "AMateria[" << this << "]: with type " << this->type << " was just created\n";
};

AMateria::AMateria(AMateria const &other)
{
	this->type = other.type;
};

AMateria	&AMateria::operator=(AMateria const &other)
{
	if (this != &other)
		this->type = other.type;
	return (*this);
};

AMateria::~AMateria(void)
{
	std::cout << "AMateria[" << this << "]: was destroyed\n";
};

std::string	const	&AMateria::getType(void) const
{
	return (type);
};
