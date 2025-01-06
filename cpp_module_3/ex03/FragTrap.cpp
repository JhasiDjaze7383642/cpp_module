/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 09:26:43 by rarakoto          #+#    #+#             */
/*   Updated: 2025/01/06 09:51:11 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap("Default Name")
{
	std::cout << "Default FragTrap was spawned.\n";
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
};

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap with the name " << name << " was just created\n";
	setName(name);
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
};

FragTrap::FragTrap(const FragTrap &other)
{
	if (this != &other)
	{
		setName(other.getName());
		setHitPoints(other.getHitPoints());
		setEnergyPoints(other.getEnergyPoints());
		setAttackDamage(other.getAttackDamage());
	}
};

FragTrap	&FragTrap::operator=(const FragTrap &other)
{
	if (this != &other)
	{
		this->setHitPoints(other.getHitPoints());
		this->setAttackDamage(other.getAttackDamage());
		this->setEnergyPoints(other.getEnergyPoints());
	}
	return (*this);
};

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << getName() << " was deleted\n";
};

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << getName() << "🙌 you\n";
}
