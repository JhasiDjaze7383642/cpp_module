/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_manipulation.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 21:14:56 by rarakoto          #+#    #+#             */
/*   Updated: 2024/12/13 11:32:23 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact_manager.hpp"

std::string	reverse(const std::string &s)
{
	std::string reversed;
	size_t		iteration;

	iteration = s.size();
	while (iteration)
		reversed.push_back(s[iteration--]);
	return (reversed);
}

std::string	truncate_string(std::string &s)
{
	std::string	copy;

	copy = std::string(s);
	if (copy.size() > 10)
	{
		copy = reverse(copy);
		copy.resize(10);
		copy[10] = '.';
		copy = reverse(copy);
	}
	return (copy);
}
