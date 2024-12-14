/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 12:21:26 by rarakoto          #+#    #+#             */
/*   Updated: 2024/12/14 08:09:53 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"
# include <iostream>

class PhoneBook
{
private:
	int	_pos;

public:
	Contact	_repertory[8];

	PhoneBook() : _pos(0) {};
	PhoneBook(const PhoneBook& other);
	~PhoneBook() {}
	PhoneBook& operator=(const PhoneBook& other);
	void	append_contact(std::string first_name,
					 std::string last_name,
					 std::string nickname,
					 std::string darkest_secret,
					 std::string phone_number);
};

#endif
