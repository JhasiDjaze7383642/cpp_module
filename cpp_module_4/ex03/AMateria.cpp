/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 14:18:07 by rarakoto          #+#    #+#             */
/*   Updated: 2025/01/06 14:26:01 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
	
}

AMateria::~AMateria(void)
{

}

AMateria::AMateria(std::string const &type)
{

}

AMateria	&AMateria::operator=(const AMateria &other)
{
	return (*this);
}

std::string const	&AMateria::getType() const
{
	return (type);
}

AMateria	*AMateria::clone() const
{
	AMateria	*new_amateria;

	return (new_amateria);
}

void		AMateria::use(ICharacter &target)
{

}