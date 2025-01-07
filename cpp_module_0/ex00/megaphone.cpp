/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 12:04:01 by rarakoto          #+#    #+#             */
/*   Updated: 2025/01/07 08:49:12 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main (int argc, char *argv[])
{
	int			pos;
	size_t		iteration;
	std::string	converted;

	pos = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (pos < argc)
		{
			iteration = -1;
			converted = argv[pos++];
			while (++iteration < converted.size())
				converted[iteration] = std::toupper(static_cast<unsigned char>(converted[iteration]));
			std::cout << converted;
		}
	}
	return (0);
}
