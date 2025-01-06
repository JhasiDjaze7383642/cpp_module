/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 11:18:08 by rarakoto          #+#    #+#             */
/*   Updated: 2025/01/06 11:20:22 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BRAIN_HPP__
# define __BRAIN_HPP__
# include <iostream>

class Brain
{
private:
	std::string	ideas[100];
public:
	Brain(void);
	Brain(const Brain &other);
	Brain	&operator=(const Brain &other);
	~Brain(void);
};

#endif
