/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 11:56:11 by rarakoto          #+#    #+#             */
/*   Updated: 2024/12/15 12:29:30 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(void)
{

}

HumanB::HumanB(std::string name)
{
	this->name = name;
}

HumanB::~HumanB(void)
{

}

HumanB::HumanB(const HumanB& other)
{
	this->name = other.name;
	this->weapon = other.weapon;
}

HumanB& HumanB::operator=(const HumanB& other)
{
	if (this != &other)
	{
		this->name = other.name;
		this->weapon = other.weapon;
	}
	return (*this);
}

void	HumanB::attack(void)
{
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
