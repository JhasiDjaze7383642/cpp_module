/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_contact.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 19:56:36 by rarakoto          #+#    #+#             */
/*   Updated: 2024/12/13 14:50:46 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact_manager.hpp"
#include <string>

static void	print_padded_right(const std::string &text)
{
	std::string	padding = "";

	padding.resize(10 - text.size(), ' ');
	std::cout << padding << text;
}

void	search_contact(PhoneBook &repertory)
{
	int			iteration;
	bool		one_defined;
	std::string	empty_text = " is empty";
	std::string	index_choice;
	int			index;

	iteration = -1;
	one_defined = false;
	std::cout << "\033[J";
	while (++iteration < 8)
	{
		if (repertory._repertory[iteration]._first_name.empty())
		{
			std::cout << iteration + 1 << whitespace(empty_text, 2) << std::endl;
			continue ;
		}
		one_defined = true;
		std::cout << "         " << iteration + 1 << "|";
		print_padded_right(truncate_string(repertory._repertory[iteration]._first_name));
		std::cout << "|";
		print_padded_right(truncate_string(repertory._repertory[iteration]._last_name));
		std::cout << "|";
		print_padded_right(truncate_string(repertory._repertory[iteration]._nickname));
		std::cout << std::endl;
	}
	while (one_defined == true)
	{
		get_input("Show index: ", index_choice, true);
		if (index_choice.size() > 1 || !isdigit(index_choice.at(0))
			|| (index_choice.at(0) - 48 < 1 || index_choice.at(0) - 48 > 8))
			std::cout << "\033[500D\033[J";
		else
		{
			if (repertory._repertory[index_choice.at(0) - 48 - 1]._first_name.empty() == false)
				break ;
			else
				std::cout << "\033[500D\033[J";
		}
	}
	if (one_defined == true)
	{
		index = index_choice.at(0) - 48 - 1;
		std::cout << "\nFirst name: " + repertory._repertory[index]._first_name + "\n";
		std::cout << "Last name: " + repertory._repertory[index]._last_name + "\n";
		std::cout << "Nickname: " + repertory._repertory[index]._nickname + "\n";
		std::cout << "Phone number: " + repertory._repertory[index]._phone_number + "\n";
		std::cout << "Darkest secret: " + repertory._repertory[index]._darkest_secret + "\n";
		wait_confirmation();
	}
	else
		wait_confirmation();
}
