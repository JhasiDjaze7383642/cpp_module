/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact_manager.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 12:20:15 by rarakoto          #+#    #+#             */
/*   Updated: 2024/12/13 14:45:38 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_MANAGER_HPP
# define CONTACT_MANAGER_HPP
# include <iostream>
# include <cstdio>
# include "PhoneBook.hpp"
# include "Contact.hpp"
# ifndef SCREEN_SIZE
#  define SCREEN_SIZE 62
# endif

void		draw_top(void);
void		print_inside_screen(std::string text);
void		draw_bottom(void);
void		show_prompt(std::string prompt, std::string &input);
std::string	whitespace(std::string &text, int adjustement);
void		print_and_listen_inside_screen(std::string text, std::string &input, int adjustement);
void		add_contact(PhoneBook &repertory);
void		search_contact(PhoneBook &repertory);
void		get_contact(void);
std::string	truncate_string(std::string &s);
std::string	reverse(const std::string& s);
void		get_input(std::string text, std::string &input);
void		get_input(std::string text, std::string &input, bool clean);
void		wait_confirmation(void);

#endif
