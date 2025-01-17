/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 16:28:13 by rarakoto          #+#    #+#             */
/*   Updated: 2025/01/16 10:36:12 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ICE_HPP__
# define __ICE_HPP__
# include "AMateria.hpp"
# include "debug.h"
# include <iostream>

class Ice : public AMateria
{
public:
	Ice(void);
	Ice(const Ice &other);
	Ice	&operator=(const Ice &other);
	~Ice(void);
	AMateria	*clone(void) const;
	void		use(ICharacter &target);
};

#endif
