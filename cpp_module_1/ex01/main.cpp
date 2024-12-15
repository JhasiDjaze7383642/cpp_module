/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 14:58:16 by rarakoto          #+#    #+#             */
/*   Updated: 2024/12/14 17:47:54 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (void)
{
	Zombie	*obj;

	obj = Zombie::zombieHorde(8, "Ny Hasina");
	obj->announce();
	return (0);
}
