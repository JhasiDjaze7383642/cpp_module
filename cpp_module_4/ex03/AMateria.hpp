/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 13:38:58 by rarakoto          #+#    #+#             */
/*   Updated: 2025/01/06 14:12:11 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AMATERIA_HPP__
# define __AMATERIA_HPP__
# include <iostream>
# include "ICharacter.hpp"

class AMateria
{
protected:
	std::string	type;
	AMateria(void);
	~AMateria(void);

public:
	AMateria(std::string const &type);
	AMateria			&operator=(const AMateria &other);
	std::string const	&getType() const;
	virtual AMateria	*clone() const = 0;
	virtual void		use(ICharacter &target);
};

#endif
