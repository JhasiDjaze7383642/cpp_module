/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 08:09:07 by rarakoto          #+#    #+#             */
/*   Updated: 2024/12/14 08:11:39 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(std::string first_name, std::string last_name, std::string nickname, std::string darkest_secret, std::string number)
{
	_first_name = first_name;
	_last_name = last_name;
	_nickname = nickname;
	_darkest_secret = darkest_secret;
	_phone_number = number;
}

Contact::Contact(const Contact& other)
{
	_first_name = other._first_name;
	_last_name = other._last_name;
	_nickname = other._nickname;
	_darkest_secret = other._darkest_secret;
	_phone_number = other._phone_number;
}

Contact& Contact::operator=(const Contact& other)
{
	if (this != &other)
	{
		_first_name = other._first_name;
		_last_name = other._last_name;
		_nickname = other._nickname;
		_darkest_secret = other._darkest_secret;
		_phone_number = other._phone_number;
	}
	return (*this);
}
