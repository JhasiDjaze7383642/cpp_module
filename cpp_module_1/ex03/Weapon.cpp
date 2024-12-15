/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 11:41:39 by rarakoto          #+#    #+#             */
/*   Updated: 2024/12/15 12:21:55 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{

}

Weapon::Weapon(std::string type)
{
	this->type = type;
}

Weapon::~Weapon(void)
{

}

Weapon::Weapon(const Weapon& other)
{
	this->type = other.type;
}

Weapon& Weapon::operator=(const Weapon& other)
{
	if (this != &other)
		this->type = other.type;
	return (*this);
}

const std::string	&Weapon::getType(void)
{
	return (type);
}

void	Weapon::setType(std::string new_type)
{
	this->type = new_type;
}
