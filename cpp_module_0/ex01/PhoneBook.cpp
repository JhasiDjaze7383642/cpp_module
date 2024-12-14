/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 07:58:39 by rarakoto          #+#    #+#             */
/*   Updated: 2024/12/14 08:05:51 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::append_contact(std::string first_name, std::string last_name,
					 			std::string nickname, std::string darkest_secret,
								std::string phone_number)
{
	_repertory[_pos] = Contact(first_name, last_name, nickname, darkest_secret, phone_number);
	if (_pos == 7)
		_pos = 0;
	else
		_pos++;
}


PhoneBook::PhoneBook(const PhoneBook& other)
{
	int	i;

	i = -1;
	while (++i < 8)
		_repertory[i] = other._repertory[i];
}

PhoneBook& PhoneBook::operator=(const PhoneBook& other)
{
	if (this != &other)
	{
		int	i;
	
		i = -1;
		while (++i < 8)
			_repertory[i] = other._repertory[i];
	}
	return (*this);
}
