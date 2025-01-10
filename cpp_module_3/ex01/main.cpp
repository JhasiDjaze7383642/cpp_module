/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 08:48:11 by rarakoto          #+#    #+#             */
/*   Updated: 2025/01/10 09:20:57 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap	a("Hasina");

	a.attack("Harena");
	a.attack("Someone");
	a.attack("Violence");
	a.attack("Another");
	a.attack("Harena");
	a.attack("Harena");
	a.attack("Harena");
	a.attack("Harena");
	a.attack("Harena");
	a.attack("Harena");
	a.attack("Harena");
	a.attack("Harena");
	a.attack("Harena");
	a.attack("Harena");
	a.attack("Harena");
	a.attack("Harena");
	a.attack("Harena");
	a.attack("Harena");
	a.attack("Someone");
	a.attack("Violence");
	a.attack("Another");
	a.attack("Someone");
	a.attack("Someone");
	a.attack("Violence");
	a.attack("Another");
	a.attack("Someone");
	a.attack("Someone");
	a.attack("Someone");
	a.attack("Someone");
	a.attack("Someone");
	a.attack("Someone");
	a.attack("Violence");
	a.attack("Another");
	a.attack("Someone");
	a.attack("Violence");
	a.attack("Violence");
	a.attack("Another");
	a.attack("Someone");
	a.attack("Violence");
	a.attack("Violence");
	a.attack("Another");
	a.attack("Someone");
	a.attack("Violence");
	a.attack("Violence");
	a.attack("Another");
	a.attack("Someone");
	a.attack("Someone");
	a.attack("Someone");
	a.attack("Violence");
	a.attack("Violence");
	a.attack("Another");
	a.attack("Someone");
	a.attack("Violence");
	a.attack("Another");
	a.attack("Someone");
	a.attack("Violence");
	a.attack("Another");
	a.attack("Someone");
	a.attack("Violence");
	a.attack("Another");
	a.attack("Someone");
	a.attack("Violence");
	a.attack("Violence");
	a.attack("Violence");
	a.attack("Another");
	a.attack("Someone");
	a.attack("Violence");
	a.attack("Another");
	a.attack("Someone");
	a.attack("Violence");
	a.guardGate();
	a.attack("Again");
	a.attack("UI");
	a.takeDamage(200);
	a.beRepaired(5);
	a.beRepaired(5);
	a.beRepaired(5);
	a.beRepaired(5);
	a.beRepaired(5);
	a.beRepaired(5);
	a.beRepaired(5);
	a.beRepaired(5);
	a.attack("Again");
	a.attack("Again");
	a.attack("Again");
	a.attack("Again");
	a.attack("Again");
	a.attack("Again");
	a.attack("Again");
	a.attack("Again");
	a.attack("Again");
	a.attack("Again");
	a.attack("Again");
	a.attack("Again");
	a.attack("Again");
	a.attack("Again");
	a.attack("UI");
	a.attack("UI");
	a.attack("UI");
	a.attack("UI");
	a.attack("UI");
	a.attack("UI");
	a.attack("UI");
	a.attack("UI");
	a.attack("UI");
	a.attack("UI");
	a.attack("UI");
	a.attack("UI");
	a.attack("UI");
	a.attack("UI");
	std::cout << a.getEnergyPoints() << std::endl;
	std::cout << a.getHitPoints() << std::endl;
	return (0);
}
