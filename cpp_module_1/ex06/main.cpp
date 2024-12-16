/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 16:16:20 by rarakoto          #+#    #+#             */
/*   Updated: 2024/12/16 18:00:16 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	get_level_pos(std::string args)
{
	std::string	level_of_complaints[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	pos;

	pos = -1;
	while (++pos < 4)
		if (level_of_complaints[pos] == args)
			return (pos);
	return (-1);
}

int	main(int argc, char **argv)
{
	Harl		idiot;
	int			log_level_min;

	if (argc == 2)
	{
		log_level_min = get_level_pos(argv[1]);
		switch (log_level_min)
		{
			case (0):
				idiot.set_log_filter(idiot.log_filter, true, 4);
				break ;
			case (1):
				idiot.set_log_filter(idiot.log_filter + log_level_min, true, 3);
				break ;
			case (2):
				idiot.set_log_filter(idiot.log_filter + log_level_min, true, 2);
				break ;
			case (3):
				idiot.set_log_filter(idiot.log_filter + log_level_min, true, 1);
				break ;
			default:
				std::cout << "[ Probably complaining about insignificant problems ]\n";
				break ;
			;
		}
		idiot.complain("WARNING");
		idiot.complain("DEBUG");
		idiot.complain("INFO");
		idiot.complain("ERROR");
		
	}
	else
		std::cout << "[ harlFilter need one argument only ]\n";
	return 0;
}
