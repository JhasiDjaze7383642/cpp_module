/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 14:44:42 by rarakoto          #+#    #+#             */
/*   Updated: 2024/12/14 17:24:20 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{

}

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
	{
		this->name = other.name;
	}
	return (*this);
}
