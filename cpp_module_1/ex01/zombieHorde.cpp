/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 17:30:41 by rarakoto          #+#    #+#             */
/*   Updated: 2024/12/16 10:41:02 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*Zombie::zombieHorde(int n, std::string name)
{
	Zombie	*obj;

	obj = new Zombie[n];
	while (--n > -1)
	{
		obj[n].name = name;
		obj[n].announce();
	}
	return (obj);
}
