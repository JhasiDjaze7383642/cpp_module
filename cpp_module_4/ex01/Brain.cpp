/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 11:20:35 by rarakoto          #+#    #+#             */
/*   Updated: 2025/01/06 11:26:21 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Default constructor of Brain called\n";
}

Brain::Brain(const Brain &other)
{
	unsigned int	iteration;

	iteration = -1;
	while (++iteration < 100)
		this->ideas[iteration] = other.ideas[iteration];
}

Brain	&Brain::operator=(const Brain &other)
{
	unsigned int	iteration;

	iteration = -1;
	if (this != &other)
	{
		while (++iteration < 100)
			this->ideas[iteration] = other.ideas[iteration];
	}
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Brain have been destroyed\n";
}
