/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_contact.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 17:07:48 by rarakoto          #+#    #+#             */
/*   Updated: 2024/12/14 08:07:28 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact_manager.hpp"

void	add_contact(PhoneBook &repertory)
{
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;

	get_input("First name: ", first_name);
	get_input("Last name: ", last_name);
	get_input("Nickname: ", nickname);
	get_input("Phone number: ", phone_number);
	get_input("Darkest secret: ", darkest_secret);
	repertory.append_contact(first_name, last_name, nickname, darkest_secret, phone_number);
	std::cout << "Contact successfully added to repertory.\n";
	wait_confirmation();
}
