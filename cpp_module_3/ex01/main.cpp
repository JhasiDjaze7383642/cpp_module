/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 08:48:11 by rarakoto          #+#    #+#             */
/*   Updated: 2025/01/02 10:26:51 by rarakoto         ###   ########.fr       */
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
	a.guardGate();
	a.attack("Again");
	a.attack("UI");
	a.beRepaired(5);
	std::cout << a.getEnergyPoints() << std::endl;
	return (0);
}
