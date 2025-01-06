/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 08:46:18 by rarakoto          #+#    #+#             */
/*   Updated: 2025/01/06 11:08:51 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_HPP__
# define __ANIMAL_HPP__
# include <iostream>

class Animal
{
protected:
	std::string	type;

public:
	Animal(void);
	Animal(std::string type);
	Animal(const Animal &other);
	Animal	&operator=(const Animal &other);
	virtual ~Animal(void);
	std::string		getType(void) const;
	void			setType(std::string new_type);
	virtual void	makeSound(void) const;
};

#endif
