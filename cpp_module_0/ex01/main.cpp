/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 12:16:26 by rarakoto          #+#    #+#             */
/*   Updated: 2024/12/13 13:38:45 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact_manager.hpp"

void	main_loop(void)
{
	std::string	input;
	PhoneBook	repertory;

	std::cout << "\033[s";
	while (true)
	{
		std::cout << "$> ";
		getline(std::cin, input);
		if (input == "ADD")
			add_contact(repertory);
		else if (input == "SEARCH")
			search_contact(repertory);
		else if (input == "EXIT")
			break ;
		else
			std::cout << "\033[u\033[J";
	}
}

int main(void)
{
	draw_top();
	main_loop();
	draw_bottom();
	return (0);
}
