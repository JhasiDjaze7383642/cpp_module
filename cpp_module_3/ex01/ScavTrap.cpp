/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 09:26:43 by rarakoto          #+#    #+#             */
/*   Updated: 2025/01/10 09:19:59 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("Default Name")
{
	std::cout << "ScavTrap with no name just popped of nowhere\n";
	setName("Default Name");
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
};

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap " << name << " was instantiated\n";
	setName(name);
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
};

ScavTrap::ScavTrap(const ScavTrap &other)
{
	if (this != &other)
	{
		setName(other.getName());
		setHitPoints(other.getHitPoints());
		setEnergyPoints(other.getEnergyPoints());
		setAttackDamage(other.getAttackDamage());
	}
};

ScavTrap	&ScavTrap::operator=(const ScavTrap &other)
{
	if (this != &other)
	{
		this->setHitPoints(other.getHitPoints());
		this->setAttackDamage(other.getAttackDamage());
		this->setEnergyPoints(other.getEnergyPoints());
	}
	return (*this);
};

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << getName() << " was erased from memory\n";
};

void		ScavTrap::attack(const std::string &target)
{
	if (getEnergyPoints() > 0 && getHitPoints() > 0)
	{
		std::cout << "ScavTrap " << getName() << " punched " << target << ", dealing " << getAttackDamage() << " damage!\n";
		setEnergyPoints(getEnergyPoints() - 1);
	}
	else
	{
		if (getHitPoints() != 0)
			std::cout << "ScavTrap " << getName() << " are exhausted and can't attack anymore\n";
		else
			std::cout << "ScavTrap " << getName() << " is dead\n";
	}
};

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << getName() << " is now in Gate keeper Mode\n";
}
