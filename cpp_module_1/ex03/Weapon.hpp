/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 11:42:13 by rarakoto          #+#    #+#             */
/*   Updated: 2024/12/15 12:03:45 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class Weapon
{
private:
	std::string	type;

public:
	Weapon(void);
	Weapon(std::string type);
	~Weapon(void);

	Weapon(const Weapon& other);
	Weapon& operator=(const Weapon& other);

	const std::string	&getType(void);
	void				setType(std::string new_type);
};

#endif
