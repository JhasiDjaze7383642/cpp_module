/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 11:14:21 by rarakoto          #+#    #+#             */
/*   Updated: 2025/01/06 09:44:05 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

DiamondTrap::DiamondTrap(void) : ScavTrap(), FragTrap()
{
	std::cout << "Default constructor of DiamondTrap called\n";
	name = "Default DiamondTrap Name";
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(30);
}

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name")
{
	this->name = name;
	std::cout << "Parameterized constructor of DiamondTrap called with the name " << name << std::endl;
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(30);
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
{
	if (this != &other)
		this->name = other.name;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout <<"DiamondTrap " << name << " have been destroyed\n";
}

void		DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
};

void	DiamondTrap::whoAmI(void)
{
	std::cout << "My name is " << name << " and my ClapTrap name is " << ClapTrap::getName() << std::endl;
}
