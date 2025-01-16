/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 15:42:51 by rarakoto          #+#    #+#             */
/*   Updated: 2025/01/16 10:36:38 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AMATERIA_HPP__
# define __AMATERIA_HPP__
# include <string>
# include <iostream>
# include "debug.h"
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
protected:
	std::string	type;

public:
	AMateria(void);
	AMateria(std::string const &type);
	AMateria(AMateria const &other);
	AMateria	&operator=(AMateria const &other);
	virtual ~AMateria(void);
	std::string	const	&getType(void) const;
	virtual AMateria	*clone(void) const = 0;
	virtual void		use(ICharacter &target);
};

#endif
