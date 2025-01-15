/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 16:24:56 by rarakoto          #+#    #+#             */
/*   Updated: 2025/01/15 16:26:15 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __IMATERIASOURCE_HPP__
# define __IMATERIASOURCE_HPP__
# include "AMateria.hpp"

class IMateriaSource
{
public:
	virtual ~IMateriaSource() {};
	virtual void		learnMateria(AMateria*) = 0;
	virtual AMateria*	createMateria(std::string const & type) = 0;
};

#endif
