/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 17:30:41 by rarakoto          #+#    #+#             */
/*   Updated: 2024/12/14 17:50:39 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*Zombie::zombieHorde(int n, std::string name)
{
	Zombie	*obj;

	// Have to figure out how to allocate it in one go
	obj = new Zombie(name);
	obj->name = name;
	(void)n;
	return (obj);
}
