/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 07:58:42 by rarakoto          #+#    #+#             */
/*   Updated: 2025/01/16 08:03:03 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

std::string const	&ICharacter::getName(void) const 
{
	return ();
}

void	ICharacter::equip(AMateria *m)
{
	(void)m;
}

void	ICharacter::unequip(int idx)
{
	(void)idx;
}

void	ICharacter::use(int idx, ICharacter &target)
{
	(void)idx;
	(void)target;
}
