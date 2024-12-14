/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 16:14:05 by rarakoto          #+#    #+#             */
/*   Updated: 2024/12/13 13:24:49 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact_manager.hpp"

void	draw_top(void)
{
	std::cout << "┌-----------------------------------┐\n"
			  << "│ CONTACT MANAGER                   │\n"
			  << "└-----------------------------------┘\n";
}

std::string	whitespace(std::string &text, int adjustement)
{
	std::string	space = " ";
	size_t		modulo;

	modulo = SCREEN_SIZE - text.size() - adjustement;
	space.resize(modulo, ' ');
	std::cout << text << space;
	return (" ");
}

void	print_inside_screen(std::string text)
{
	std::cout << "│ " << whitespace(text, 1) << "│" << std::endl;
}

void	draw_bottom(void)
{
	std::cout << "┌-----------------------------------┐\n"
			  << "│ SESSION TERMINED                  │\n"
			  << "└-----------------------------------┘\n";
}
