/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 11:14:21 by rarakoto          #+#    #+#             */
/*   Updated: 2025/01/02 11:36:55 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

DiamondTrap::DiamondTrap(void) : ScavTrap(""), FragTrap("")
{
	std::cout << "Default constructor of DiamondTrap called\n";
}

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name), FragTrap(name)
{
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
