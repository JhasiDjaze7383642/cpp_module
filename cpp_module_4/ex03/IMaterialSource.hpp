/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMaterialSource.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 14:04:38 by rarakoto          #+#    #+#             */
/*   Updated: 2025/01/06 14:06:51 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __IMATERIALSOURCE_HPP__
# define __IMATERIALSOURCE_HPP__
# include "AMateria.hpp"

class IMaterialSource
{
public:
	virtual 			~IMaterialSource();
	virtual void		learnMateria(AMateria *) = 0;
	virtual AMateria	*createMateria(std::string const &type) = 0;
};

#endif
