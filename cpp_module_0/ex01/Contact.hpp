/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 12:22:20 by rarakoto          #+#    #+#             */
/*   Updated: 2024/12/14 08:12:46 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>

class Contact
{
public:
	std::string		_first_name;
	std::string		_last_name;
	std::string		_nickname;
	std::string		_darkest_secret;
	std::string		_phone_number;

	Contact() : _first_name(), _last_name(), _nickname(), _darkest_secret(), _phone_number() {}
	Contact(std::string first_name, std::string last_name,
		    std::string nickname, std::string darkest_secret,
		    std::string number);
	Contact(const Contact& other);
	~Contact() {};
	Contact& operator=(const Contact& other);
};

#endif
