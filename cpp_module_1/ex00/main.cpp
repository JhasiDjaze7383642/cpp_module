/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 14:58:16 by rarakoto          #+#    #+#             */
/*   Updated: 2024/12/14 17:18:23 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (void)
{
	Zombie	*object[10];
	int		pos;

	pos = -1;
	while (++pos < 9)
	{
		object[pos] = Zombie::newZombie("Ny Hasina");
		object[pos]->announce();
		Zombie::randomChump("Oni");
	}
	pos = -1;
	while (++pos < 9)
		delete object[pos];
	return (0);
}
