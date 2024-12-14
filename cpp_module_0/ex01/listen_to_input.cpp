/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   listen_to_input.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 16:48:36 by rarakoto          #+#    #+#             */
/*   Updated: 2024/12/13 14:46:48 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact_manager.hpp"

void	print_and_listen_inside_screen(std::string text, std::string &input, int adjustement)
{
	std::cout << "│ \033[s" << whitespace(text, adjustement) << "│\n";
	draw_bottom();
	std::cout << "\033[u\033[s";
	while (true)
	{
		std::cout << "\033[u";
		getline(std::cin, input);
		if (input != "")
			break ;
		else
		{
			std::cout << "\033[u\n";
			draw_bottom();
			std::cout << "\033[J";
		}
	}
}

void	get_input(std::string text, std::string &input)
{
	while (true)
	{
		std::cout << text;
		getline(std::cin, input);
		if (input.empty())
		{
			std::cout << "\033[500D\033[J\033[A";
			continue ;
		}
		else
			break ;
	}
}

void	get_input(std::string text, std::string &input, bool clean)
{
	while (true)
	{
		std::cout << text;
		getline(std::cin, input);
		if (input.empty())
		{
			if (clean)
				std::cout << "\033[500D\033[J\033[A";
			continue ;
		}
		else
		{
			if (clean)
				std::cout << "\033[500D\033[J\033[A";
			break ;
		}
	}
}
