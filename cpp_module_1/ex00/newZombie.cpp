/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 14:53:42 by rarakoto          #+#    #+#             */
/*   Updated: 2024/12/14 14:56:33 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*Zombie::newZombie(std::string name)
{
	Zombie	*object;

	object = new Zombie;
	object->name = name;
	return (object);
}
