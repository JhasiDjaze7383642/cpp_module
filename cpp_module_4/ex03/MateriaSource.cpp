/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 09:08:57 by rarakoto          #+#    #+#             */
/*   Updated: 2025/01/16 10:39:30 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) : IMateriaSource(), mat_pos(0)
{
	int	pos;

	pos = -1;
	while (++pos < MAX_MATERIA)
		Materia[pos] = 0x0;
	if (DEBUG_PRINT)
		std::cout << "MateriaSource[" << this << "]: spawned\n";
};

MateriaSource::MateriaSource(const MateriaSource &other) : IMateriaSource(), mat_pos(0)
{
	int	pos;

	pos = -1;
	while (++pos < MAX_MATERIA)
		Materia[pos] = other.Materia[pos];
};

MateriaSource	&MateriaSource::operator=(const MateriaSource &other)
{
	int	pos;

	if (this != &other)
	{
		mat_pos = other.mat_pos;
		pos = -1;
		while (++pos < MAX_MATERIA)
		{
			if (Materia[pos] != 0x0)
				delete Materia[pos];
			Materia[pos] = other.Materia[pos];
		}
	};
	return (*this);
};

MateriaSource::~MateriaSource(void)
{
	short	pos;

	pos = -1;
	while (++pos < MAX_MATERIA)
		delete Materia[pos];
	if (DEBUG_PRINT)
		std::cout << "MateriaSource[" << this << "]: was erased from memory\n";
};

void	MateriaSource::learnMateria(AMateria *m)
{
	if (mat_pos >= MAX_MATERIA)
		std::cout << "MateriaSource[" << this << "]: is full\n";
	else
		Materia[mat_pos++] = m;
};

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	short	pos;

	pos = -1;
	while (++pos < MAX_MATERIA)
		if (Materia[pos] && Materia[pos]->getType() == type)
			return (Materia[pos]->clone());
	return (NULL);
};
