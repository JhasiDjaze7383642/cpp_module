/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 08:12:15 by rarakoto          #+#    #+#             */
/*   Updated: 2025/01/16 13:14:55 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : name("Default"), unused_mat_last_index(0)
{
	int	pos;

	pos = -1;
	while (++pos < MAX_INVENTORY)
		inventory[pos] = 0x0;
	pos = -1;
	while (++pos < MAX_UNUSED_MAT)
		unused_mat[pos] = 0x0;
	if (DEBUG_PRINT)
		std::cout << "Character[" << this << "] with default name just created\n";
};

Character::Character(std::string name) : name(name), unused_mat_last_index(0)
{
	int	pos;

	pos = -1;
	while (++pos < MAX_INVENTORY)
		inventory[pos] = 0x0;
	pos = -1;
	while (++pos < MAX_UNUSED_MAT)
		unused_mat[pos] = 0x0;
	if (DEBUG_PRINT)
		std::cout << "Character[" << this << "][name :" << name << "] just created\n";
};

Character::Character(const Character &other) : name(other.name), unused_mat_last_index(other.unused_mat_last_index)
{
	int	pos;

	pos = -1;
	while (++pos < MAX_INVENTORY)
		if (inventory[pos] != 0x0)
			delete inventory[pos];
	pos = -1;
	while (++pos < MAX_INVENTORY)
		inventory[pos] = other.inventory[pos]->clone();

	pos = -1;
	while (++pos < MAX_UNUSED_MAT)
		if (unused_mat[pos] != 0x0)
			delete unused_mat[pos];
	pos = -1;
	while (++pos < other.unused_mat_last_index && pos < MAX_UNUSED_MAT)
		unused_mat[pos] = other.unused_mat[pos]->clone();
};

Character	&Character::operator=(const Character &other)
{
	int	pos;

	pos = -1;
	if (this != &other)
	{
		name = other.getName();
		unused_mat_last_index = other.unused_mat_last_index;
		while (++pos < MAX_INVENTORY)
		{
			if (inventory[pos] != 0x0)
			{
				delete inventory[pos];
				inventory[pos] = 0x0;
			}
		}
		pos = -1;
		while (++pos < MAX_INVENTORY)
		{
			if (other.inventory[pos])
				inventory[pos] = other.inventory[pos]->clone();
			else
				inventory[pos] = 0x0;
		}
		pos = -1;
		while (++pos < MAX_UNUSED_MAT)
		{
			if (unused_mat[pos] != 0x0)
			{
				delete unused_mat[pos];
				unused_mat[pos] = 0x0;
			}
		}
		pos = -1;
		while (++pos < unused_mat_last_index && pos < MAX_UNUSED_MAT)
		{
			if (other.unused_mat[pos])
				unused_mat[pos] = other.unused_mat[pos]->clone();
			else
				unused_mat[pos] = 0x0;
		}
	}
	return (*this);
};

Character::~Character(void)
{
	int	pos;

	pos = -1;
	while (++pos < MAX_INVENTORY)
		if (inventory[pos] != 0x0)
		{
			delete inventory[pos];
			inventory[pos] = 0x0;
		}
	pos = -1;
	while (++pos < MAX_UNUSED_MAT)
		if (unused_mat[pos] != 0x0)
		{
			delete unused_mat[pos];
			unused_mat[pos] = 0x0;
		}
	if (DEBUG_PRINT)
		std::cout << "Character[" << this << "] with the name " << getName() << " was just popped out\n";
};

std::string const	&Character::getName(void) const { return (this->name); };

void	Character::equip(AMateria* m)
{
	int	pos;

	pos = -1;
	while (++pos < MAX_INVENTORY)
		if (inventory[pos] == 0x0)
			break ;
	if (pos >= MAX_INVENTORY)
	{
		std::cout << "Character[" << this << "][name: " << getName() << "] inventory full\n";
		return ;
	}
	else
		inventory[pos] = m;
};

void	Character::unequip(int idx)
{
	if (idx >= MAX_INVENTORY || idx < 0)
	{
		std::cout << "Character[" << this << "]: idx " << idx << " is OUT OF BOUNDARY\n";
		return ;
	}
	if (inventory[idx] == 0x0)
	{
		std::cout << "inventory[" << idx << "] nothing to unequip\n";
		return ;
	}
	else
	{
		if (unused_mat_last_index < MAX_UNUSED_MAT)
		{
			unused_mat[unused_mat_last_index++] = inventory[idx];
			std::cout << "AMateria of type " << inventory[idx]->getType() << " was dropped\n";
			inventory[idx] = 0x0;
		}
		else
			std::cout << "Character[" << this << "][name: " << getName() << "]: dropped too much material\n";
	}
};

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= MAX_INVENTORY || idx < 0)
	{
		std::cout << "Character[" << this << "]: idx " << idx << " is OUT OF BOUNDARY\n";
		return ;
	}
	if (inventory[idx] == 0x0)
		std::cout << "Character[" << this << "][name: " << getName() << "]: inventory empty at this index\n";
	else
		inventory[idx]->use(target);
};

void	Character::print_inventory(void) const
{
	short	pos;

	pos = -1;
	while (++pos < MAX_INVENTORY)
	{
		if (inventory[pos] == 0x0)
			std::cout << "inventory[" << pos << "]: is empty\n";
		else
			std::cout << "inventory[" << pos << "]: contain " << inventory[pos]->getType() << std::endl;
	}
}

void	Character::print_unused_mat(void) const
{
	short	pos;

	pos = -1;
	while (++pos < MAX_UNUSED_MAT)
	{
		if (unused_mat[pos] == 0x0)
			std::cout << "inventory[" << pos << "]: is empty\n";
		else
			std::cout << "inventory[" << pos << "]: contain " << unused_mat[pos]->getType() << std::endl;
	}
}
