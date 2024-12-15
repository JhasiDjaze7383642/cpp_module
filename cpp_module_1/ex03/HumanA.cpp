/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 11:56:11 by rarakoto          #+#    #+#             */
/*   Updated: 2024/12/15 12:25:19 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(void)
{

}

HumanA::HumanA(std::string name, Weapon &weapon)
{
	this->name = name;
	this->weapon = &weapon;
}

HumanA::~HumanA(void)
{

}

HumanA::HumanA(const HumanA& other)
{
	this->name = other.name;
	this->weapon = other.weapon;
}

HumanA& HumanA::operator=(const HumanA& other)
{
	if (this != &other)
	{
		this->name = other.name;
		this->weapon = other.weapon;
	}
	return (*this);
}

void	HumanA::attack(void)
{
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}
