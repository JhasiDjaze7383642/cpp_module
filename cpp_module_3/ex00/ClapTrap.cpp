/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 13:15:45 by rarakoto          #+#    #+#             */
/*   Updated: 2024/12/20 14:12:41 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <string>

ClapTrap::ClapTrap(void) : _name(), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "Default constructor of ClapTrap called.\n";
};

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "Parameterized constructor of ClapTrap called.\n";
};

ClapTrap::ClapTrap(const ClapTrap &other)
{
	if (this != &other)
	{
		_name = other._name;
		_hit_points = other._hit_points;
		_energy_points = other._energy_points;
		_attack_damage = other._attack_damage;
	}
};

ClapTrap	&ClapTrap::operator=(const ClapTrap &other)
{
		return (*this);
};

ClapTrap::~ClapTrap(void)
{
	std::cout << _name << " have been destroyed\n";
};

void		ClapTrap::attack(const std::string &target)
{
	int			value;
	std::string	new_string;

	value = std::stoi(target.c_str());
	if (value != 0)
		value--;
	new_string = std::to_string(value);
};

void		ClapTrap::takeDamage(unsigned int amount)
{

};

void		ClapTrap::beRepaired(unsigned int amount)
{
	if (_energy_points - amount > 0)
		_hit_points += amount;
};
