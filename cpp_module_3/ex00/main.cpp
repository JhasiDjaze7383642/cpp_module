/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 08:48:11 by rarakoto          #+#    #+#             */
/*   Updated: 2025/01/10 09:08:10 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap	a("Hasina");

	a.attack("Harena");
	a.attack("Someone");
	a.attack("Violence");
	a.attack("Another");
	a.attack("Again");
	std::cout << a.getEnergyPoints() << std::endl;
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
	std::cout << a.getEnergyPoints() << std::endl;
	std::cout << a.getHitPoints() << std::endl;
	return (0);
}
