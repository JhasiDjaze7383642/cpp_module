/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 10:52:41 by rarakoto          #+#    #+#             */
/*   Updated: 2025/01/16 13:26:16 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGANIMAL_HPP__
# define __WRONGANIMAL_HPP__
# include <iostream>

class WrongAnimal
{
protected:
	std::string	type;

public:
	WrongAnimal(void);
	WrongAnimal(std::string type);
	WrongAnimal(const WrongAnimal &other);
	WrongAnimal	&operator=(const WrongAnimal &other);
	~WrongAnimal(void);
	std::string		getType(void) const;
	void			setType(std::string new_type);
	void			makeSound(void) const;
};

#endif
