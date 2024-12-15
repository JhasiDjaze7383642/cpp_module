/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 10:57:20 by rarakoto          #+#    #+#             */
/*   Updated: 2024/12/15 11:33:52 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main (void)
{
	std::string	s;
	std::string	*stringPTR;
	std::string	&stringREF = s;

	s = "HI THIS IS BRAIN";	
	stringPTR = &s;
	std::cout << "address of s: " << &s
			<< "\naddress of stringPTR: " << stringPTR
			<< "\naddress of stringREF: " << &stringREF
			<< "\nvalue of s: " << s
			<< "\nvalue of stringPTR: " << *stringPTR
			<< "\nvalue of stringREF: " << stringREF << std::endl;
	return (0);
}
