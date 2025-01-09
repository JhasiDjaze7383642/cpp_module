/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 10:46:16 by rarakoto          #+#    #+#             */
/*   Updated: 2025/01/09 10:00:03 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point);

int	main(void)
{
	Point	A (0.0f, 0.0f);
	Point	B (5.0f, 0.0f);
	Point	C (0.0f, 5.0f);
	Point	P (2, 2.85f);

	if (bsp(A, B, C, P))
		std::cout << "Inside\n";
	else
		std::cout << "Outside\n";
}
