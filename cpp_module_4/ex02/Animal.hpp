/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 08:46:18 by rarakoto          #+#    #+#             */
/*   Updated: 2025/01/06 13:25:05 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_HPP__
# define __ANIMAL_HPP__
# include <iostream>

class Animal
{
protected:
	Animal(void);
	Animal(std::string type);
	Animal(const Animal &other);
	std::string	type;

public:
	virtual ~Animal(void);
	Animal	&operator=(const Animal &other);
	std::string		getType(void) const;
	void			setType(std::string new_type);
	virtual void	makeSound(void) const;
};

#endif
