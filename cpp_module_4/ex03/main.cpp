/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 17:02:37 by rarakoto          #+#    #+#             */
/*   Updated: 2025/01/15 17:35:41 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

int main (void)
{
	Cure			Obj;
	AMateria	*copy;
	AMateria	*copy2;

	copy = Obj.clone();
	std::cout << "Copy type-> " << copy->getType() << std::endl;
	delete copy;
	copy2 = Obj.clone();
	std::cout << "Copy2 type-> " << copy2->getType() << std::endl;
	delete copy2;
	return 0;
}
