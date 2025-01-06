/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 08:46:18 by rarakoto          #+#    #+#             */
/*   Updated: 2025/01/06 10:42:44 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_HPP__
# define __CAT_HPP__
# include "Animal.hpp"
# include <iostream>

class Cat : public Animal
{
protected:
	std::string	type;

public:
	Cat(void);
	Cat(std::string type);
	Cat(const Cat &other);
	Cat	&operator=(const Cat &other);
	~Cat(void);
	void	makeSound(void) const;
};

#endif
