/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_terminal_mode.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:19:47 by rarakoto          #+#    #+#             */
/*   Updated: 2024/12/13 14:35:33 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact_manager.hpp"
#include "utils_header.h"

void	setRawMode(bool enable)
{
	static struct termios oldt, newt;

	if (enable)
	{
		tcgetattr(STDIN_FILENO, &oldt);
		newt = oldt;
		newt.c_lflag &= ~(ICANON | ECHO);
		tcsetattr(STDIN_FILENO, TCSANOW, &newt);
	}
	else
		tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
}

void	wait_confirmation(void)
{
	int	character;

	std::cout << "[ENTER]";
	setRawMode(true);
	while (true)
	{
		character = getchar();
		if (character == '\n')
			break ;
	}
	setRawMode(false);
	std::cout << "\033[u\033[J\033[u";
}
