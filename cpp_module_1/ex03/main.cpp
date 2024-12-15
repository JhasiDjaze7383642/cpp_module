/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 12:13:45 by rarakoto          #+#    #+#             */
/*   Updated: 2024/12/15 12:31:00 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
	Weapon	club = Weapon("crude spiked club");
	HumanB	jim("Jim");

	jim.setWeapon(club);
	jim.attack();
	club.setType("some other type of club.");
	jim.attack();
	// bob.attack();
	// club.setType("some other type of club.");
	// std::cout << club.getType() << std::endl;
	// bob.attack();
	//
	return 0;
}
