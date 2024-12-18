/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 07:49:15 by rarakoto          #+#    #+#             */
/*   Updated: 2024/12/18 10:11:34 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static float compute_area(const Point p1, const Point p2, const Point p3)
{
	float	area;

	area =	(( p1.getX().toFloat() * ( p2.getY().toFloat() - p3.getY().toFloat() ) )
				+ ( p2.getX().toFloat() * ( p3.getY().toFloat() - p1.getY().toFloat() ) )
					+ ( p3.getX().toFloat() * ( p1.getY().toFloat() - p2.getY().toFloat() ) )) / 2;
	return ((area >= 0) ? area : area * -1);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	float	areaABP;
	float	areaBCP;
	float	areaCAP;

	if ((point == a) || (point == b) || (point == c))
		return (false);
	areaABP = compute_area(a, b, point);
	areaBCP = compute_area(b, c, point);
	areaCAP = compute_area(c, a, point);
	return (areaABP + areaBCP + areaCAP == compute_area(a, b, c));
}
