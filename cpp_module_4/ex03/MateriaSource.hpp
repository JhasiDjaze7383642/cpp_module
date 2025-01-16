/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 09:04:17 by rarakoto          #+#    #+#             */
/*   Updated: 2025/01/16 14:16:08 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MATERIASOURCE_HPP__
# define __MATERIASOURCE_HPP__
# include "debug.h"
# include "IMateriaSource.hpp"
# define MAX_MATERIA 4

class MateriaSource : public IMateriaSource
{
private:
	AMateria		*Materia[MAX_MATERIA];
	unsigned short	mat_pos;

public:
	MateriaSource(void);
	MateriaSource(const MateriaSource &other);
	MateriaSource		&operator=(const MateriaSource &other);
	~MateriaSource(void);
	void		learnMateria(AMateria* m);
	AMateria*	createMateria(std::string const & type);
};

#endif
