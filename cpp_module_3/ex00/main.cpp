/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 08:48:11 by rarakoto          #+#    #+#             */
/*   Updated: 2025/01/02 09:06:31 by rarakoto         ###   ########.fr       */
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
	a.attack("UI");
	a.beRepaired(5);
	std::cout << a.getEnergyPoints() << std::endl;
	return (0);
}
