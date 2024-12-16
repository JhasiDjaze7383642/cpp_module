/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 11:54:32 by rarakoto          #+#    #+#             */
/*   Updated: 2024/12/16 09:34:56 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include <iostream>
# include "Weapon.hpp"

class HumanB
{
private:
	std::string	name;
	Weapon		*weapon;

public:
	HumanB(void);
	HumanB(std::string name);
	~HumanB(void);

	HumanB(const HumanB& other);
	HumanB& operator=(const HumanB& other);

	void	setWeapon(Weapon &weapon);
	void	attack();
};

#endif
