/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 17:32:33 by rarakoto          #+#    #+#             */
/*   Updated: 2025/01/16 10:36:25 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CURE_HPP__
# define __CURE_HPP__
# include "AMateria.hpp"
# include "debug.h"
# include <iostream>

class Cure : public AMateria
{
public:
	Cure(void);
	Cure(const Cure &other);
	Cure	&operator=(const Cure &other);
	~Cure(void);
	AMateria	*clone(void) const;
	void		use(ICharacter &target);
};

#endif
