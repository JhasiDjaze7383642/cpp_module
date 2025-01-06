/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 08:59:46 by rarakoto          #+#    #+#             */
/*   Updated: 2025/01/06 13:07:04 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	// const Animal	*array[100];
	// unsigned int	pos;
	//
	// pos = -1;
	// while (++pos < 50)
	// 	array[pos] = new Dog();
	// while (++pos < 100)
	// 	array[pos] = new Cat();
	// pos = 0;
	// while (pos < 100)
	// 	delete array[pos++];
	const Animal	*j = new Dog();
	const Animal	*i = new Cat();

	delete j;
	delete i;
	return (0);
}
