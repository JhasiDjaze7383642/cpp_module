/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 09:12:06 by rarakoto          #+#    #+#             */
/*   Updated: 2025/01/02 10:30:54 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCAVTRAP__HPP__
# define __SCAVTRAP__HPP__
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &other);
	ScavTrap	&operator=(const ScavTrap &other);
	~ScavTrap(void);

	void	attack(const std::string &target);
	void	guardGate(void);
};

#endif
