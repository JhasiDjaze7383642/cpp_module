/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 13:15:45 by rarakoto          #+#    #+#             */
/*   Updated: 2025/01/10 09:12:26 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name(), _hit_points(100), _energy_points(50), _attack_damage(20)
{
	std::cout << "Default constructor of ClapTrap called.\n";
};

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(100), _energy_points(50), _attack_damage(20)
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
	if (this != &other)
	{
		this->_hit_points = other.getHitPoints();
		this->_attack_damage = other.getAttackDamage();
		this->_energy_points = other.getEnergyPoints();
	}
	return (*this);
};

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap "<< _name << " have been destroyed\n";
};

void		ClapTrap::attack(const std::string &target)
{
	if (_energy_points > 0 && _hit_points > 0)
	{
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!\n";
		_energy_points--;
	}
	else
	{
		if (_hit_points != 0)
			std::cout << "ClapTrap " << _name << " are exhausted and can't attack anymore\n";
		else
			std::cout << "ClapTrap " << _name << " is dead\n";
	}
};

void		ClapTrap::takeDamage(unsigned int amount)
{
	if (_hit_points - amount >= 0)
	{
		std::cout << "ClapTrap " << _name << " took " << amount << " damage\n";
		_hit_points -= (_hit_points > amount) ? amount : _hit_points;
	}
	else
		std::cout << "ClapTrap " << _name << "is already dead\n";
};

void		ClapTrap::beRepaired(unsigned int amount)
{
	if (_energy_points > 0 && _hit_points > 0)
	{
		std::cout << "ClapTrap " << _name << " repaired himself, " << amount << " hit points restored\n";
		_energy_points--;
		_hit_points += amount;
	}
	else
	{
		if (_hit_points != 0)
			std::cout << "ClapTrap " << _name << " are exhausted and can't repair himself anymore\n";
		else
			std::cout << "ClapTrap " << _name << " is dead\n";
	}
};

std::string		ClapTrap::getName(void) const
{
	return (_name);
}

unsigned int	ClapTrap::getHitPoints(void) const
{
	return (_hit_points);
}

unsigned int	ClapTrap::getEnergyPoints(void) const
{
	return (_energy_points);
}

unsigned int	ClapTrap::getAttackDamage(void) const
{
	return (_attack_damage);
}

void		ClapTrap::setName(std::string name)
{
	_name = name;
}

void		ClapTrap::setHitPoints(unsigned int amount)
{
	_hit_points = amount;
}

void		ClapTrap::setEnergyPoints(unsigned int amount)
{
	_energy_points = amount;
}

void		ClapTrap::setAttackDamage(unsigned int amount)
{
	_attack_damage = amount;
}
