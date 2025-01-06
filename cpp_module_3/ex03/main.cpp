/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 08:48:11 by rarakoto          #+#    #+#             */
/*   Updated: 2025/01/06 09:24:12 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap	a("Hasina");

	std::cout << "My Hit points are " << a.getHitPoints() << std::endl;
	std::cout << "My Energy points are " << a.getEnergyPoints() << std::endl;
	std::cout << "My Attack Damage are " << a.getAttackDamage() << std::endl;
	a.attack("Harena");
	a.whoAmI();
	return (0);
}
