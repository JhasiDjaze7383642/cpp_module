/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 08:48:11 by rarakoto          #+#    #+#             */
/*   Updated: 2025/01/10 10:03:28 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap	a("Hasina");
	
	std::cout << "Hit Points: " << a.getHitPoints() << std::endl;
	std::cout << "Energy Points: " << a.getEnergyPoints() << std::endl;
	std::cout << "Attack Damage: " << a.getAttackDamage() << std::endl;
	a.attack("Harena");
	a.attack("Someone");
	a.attack("Violence");
	a.attack("Another");
	a.attack("Again");
	a.takeDamage(5);
	a.attack("UI");
	a.attack("UI");
	a.attack("UI");
	a.attack("UI");
	a.attack("UI");
	a.attack("UI");
	a.attack("UI");
	a.attack("UI");
	a.takeDamage(10);
	a.attack("UI");
	a.attack("UI");
	a.attack("UI");
	a.attack("UI");
	a.beRepaired(2);
	std::cout << "Hit Points: " << a.getHitPoints() << std::endl;
	std::cout << "Energy Points: " << a.getEnergyPoints() << std::endl;
	std::cout << "Attack Damage: " << a.getAttackDamage() << std::endl;
	return (0);
}
