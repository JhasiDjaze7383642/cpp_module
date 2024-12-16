/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 14:44:42 by rarakoto          #+#    #+#             */
/*   Updated: 2024/12/16 10:37:17 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void): name("") {};

Zombie::Zombie(std::string name) : name(name) {};

Zombie::~Zombie(void)
{
	std::cout << name << " was destroyed.\n";
}

Zombie::Zombie(const Zombie& other)
{
	this->name = other.name;
}

void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}


Zombie& Zombie::operator=(const Zombie& other)
{
	if (this != &other)
		this->name = other.name;
	return (*this);
}
