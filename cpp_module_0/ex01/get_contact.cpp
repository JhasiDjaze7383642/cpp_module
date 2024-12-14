/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_contact.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 16:15:25 by rarakoto          #+#    #+#             */
/*   Updated: 2024/12/12 16:15:58 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact_manager.hpp"

void	show_prompt(std::string prompt, std::string &input)
{
	std::cout << prompt;
	std::cin >> input;
}

void	get_contact(void)
{
	std::string	input;
	int			i;

	i = 0;
	while (true)
	{
		if (i == 0)
			show_prompt("First Name: ", input);
		else if (i == 1)
			show_prompt("Last Name: ", input);
		else if (i == 2)
			show_prompt("Nickname: ", input);
		else if (i == 3)
			show_prompt("Phone Number: ", input);
		else if (i == 4)
			show_prompt("Darkest Secret: ", input);
		else
			break ;
		i++;
	}
	std::cout << input;
}
