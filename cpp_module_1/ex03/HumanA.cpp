/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 11:56:11 by rarakoto          #+#    #+#             */
/*   Updated: 2024/12/16 09:31:53 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon) {};

HumanA::~HumanA(void){};

HumanA::HumanA(const HumanA& other) : name(other.name), weapon(other.weapon) {};

HumanA& HumanA::operator=(const HumanA& other)
{
	if (this != &other)
		this->name = other.name;
	return (*this);
}

void	HumanA::attack(void)
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
