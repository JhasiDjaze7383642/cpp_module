/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 08:46:18 by rarakoto          #+#    #+#             */
/*   Updated: 2025/01/06 11:29:32 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_HPP__
# define __DOG_HPP__
# include "Animal.hpp"
# include <iostream>

class Dog : public Animal
{
public:
	Dog(void);
	Dog(std::string type);
	Dog(const Dog &other);
	Dog	&operator=(const Dog &other);
	~Dog(void);
	void	makeSound(void) const;
};

#endif
