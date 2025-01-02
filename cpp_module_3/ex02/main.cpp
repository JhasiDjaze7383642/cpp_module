/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 08:48:11 by rarakoto          #+#    #+#             */
/*   Updated: 2025/01/02 10:45:26 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	FragTrap	a("Hasina");

	a.attack("Harena");
	std::cout << a.getEnergyPoints() << std::endl;
	a.attack("Someone");
	std::cout << a.getEnergyPoints() << std::endl;
	a.attack("Violence");
	std::cout << a.getEnergyPoints() << std::endl;
	a.attack("Another");
	std::cout << a.getEnergyPoints() << std::endl;
	a.highFivesGuys();
	std::cout << a.getEnergyPoints() << std::endl;
	a.attack("Again");
	std::cout << a.getEnergyPoints() << std::endl;
	a.attack("UI");
	std::cout << a.getEnergyPoints() << std::endl;
	a.beRepaired(5);
	std::cout << a.getEnergyPoints() << std::endl;
	return (0);
}
