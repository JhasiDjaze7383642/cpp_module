/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 16:20:37 by rarakoto          #+#    #+#             */
/*   Updated: 2024/12/16 17:58:43 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	set_log_filter(this->log_filter, false, 4);
};

Harl::~Harl(void)
{
	set_log_filter(this->log_filter, false, 4);
};

Harl::Harl(const Harl &other) { (void)other; };
Harl&	Harl::operator=(const Harl &other)
{
	(void)other;
	return (*this);
};

void	Harl::debug(void)
{
	std::cout << "[~ DEBUG ~]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI really do!\n";
}

void	Harl::info(void)
{
	std::cout << "[~ INFO ~]\nI cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void	Harl::warning(void)
{
	std::cout << "[~ WARNING ~]\nI think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month.\n";
}

void	Harl::error(void)
{
	std::cout << "[~ ERROR ~]\nThis is unacceptable! I want to speak to the manager now.\n";
}

void	Harl::complain(std::string level)
{
	int	pos;
	typedef void (Harl::*ptr_to_member)(void);
	std::string	complain_level[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	ptr_to_member	func[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	pos = -1;
	while (++pos < 4)
	{
		if (complain_level[pos] == level)
		{
			if (log_filter[pos] == true)
				(this->*func[pos])();
			return ;
		}

	}
}

void	Harl::set_log_filter(bool *array, bool value, int size)
{
	int	pos;

	pos = -1;
	while (++pos < size)
		array[pos] = value;
}
