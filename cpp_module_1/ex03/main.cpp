/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 12:13:45 by rarakoto          #+#    #+#             */
/*   Updated: 2025/01/08 12:11:02 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
	Weapon	club = Weapon("crude spiked club");
	// HumanB	jim("Jim");
	HumanA	bob("Bob", club);

	// jim.setWeapon(club);
	// jim.attack();
	// club.setType("some other type of club.");
	// jim.attack();
	bob.attack();
	club.setType("some other type of club.");
	bob.attack();
	return 0;
}
