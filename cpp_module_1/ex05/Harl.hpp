/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 16:16:30 by rarakoto          #+#    #+#             */
/*   Updated: 2024/12/16 16:27:49 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HARL__HPP
# define __HARL__HPP
# include <iostream>

class Harl
{
private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);

public:
	Harl(void);
	~Harl(void);
	Harl(const Harl &other);
	Harl&	operator=(const Harl &other);

	void	complain(std::string level);
};

#endif
