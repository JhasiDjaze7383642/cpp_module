/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 10:55:14 by rarakoto          #+#    #+#             */
/*   Updated: 2025/01/16 13:30:57 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGCAT_HPP__
# define __WRONGCAT_HPP__
# include "WrongAnimal.hpp"
# include <iostream>

class WrongCat : public WrongAnimal
{
protected:
	std::string	type;

public:
	WrongCat(void);
	WrongCat(std::string type);
	WrongCat(const WrongCat &other);
	WrongCat	&operator=(const WrongCat &other);
	~WrongCat(void);
	void		makeSound(void) const;
};

#endif
