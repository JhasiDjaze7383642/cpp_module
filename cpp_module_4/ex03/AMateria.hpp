/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 15:42:51 by rarakoto          #+#    #+#             */
/*   Updated: 2025/01/15 17:50:32 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AMATERIA_HPP__
# define __AMATERIA_HPP__
# include <string>
# include <iostream>
# include "ICharacter.hpp"

// class ICharacter;
// NOTE: You were about to test the use function in Class Ice and Cure,
// but the program didn't want to compile because of AMateria
// not been declared ad ICharacter.hpp.25.31
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
