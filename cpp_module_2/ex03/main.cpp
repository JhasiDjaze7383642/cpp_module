/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 10:46:16 by rarakoto          #+#    #+#             */
/*   Updated: 2024/12/20 13:03:45 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point);

int	main(void)
{
	Point	A (0, 0);
	Point	B (2, 0);
	Point	C (1, 2);
	Point	P (1, 1);

	if (bsp(A, B, C, P))
		std::cout << "Inside\n";
	else
		std::cout << "Outside\n";
}
