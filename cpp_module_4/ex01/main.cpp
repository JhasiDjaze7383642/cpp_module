/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 08:59:46 by rarakoto          #+#    #+#             */
/*   Updated: 2025/01/16 14:41:14 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
# define SPAWN_NB 100

int main()
{
	{
		const Animal	*array[SPAWN_NB];
		short			pos;
		
		pos = -1;
		while (++pos < SPAWN_NB / 2)
			array[pos] = new Dog();
		while (pos < SPAWN_NB)
			array[pos++] = new Cat();
		pos = -1;
		while (++pos < SPAWN_NB)
			delete array[pos];
	}
	{
		const Animal	*j = new Dog();
		const Animal	*i = new Cat();
		
		delete j;
		delete i;
	}
	return (0);
}
