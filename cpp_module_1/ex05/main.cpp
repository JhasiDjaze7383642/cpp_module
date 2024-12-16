/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 16:16:20 by rarakoto          #+#    #+#             */
/*   Updated: 2024/12/16 16:57:54 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	idiot;

	idiot.complain("WARNING");
	idiot.complain("DEBUG");
	idiot.complain("INFO");
	idiot.complain("error");
	idiot.complain("ERROR");
	return 0;
}
