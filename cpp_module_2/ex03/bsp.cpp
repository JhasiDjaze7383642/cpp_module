/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 07:49:15 by rarakoto          #+#    #+#             */
/*   Updated: 2025/01/08 13:26:30 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float crossProduct(const Point& a, const Point& b, const Point& c)
{
    return ((b.getX() - a.getX()) * (c.getY() - a.getY()) - (b.getY() - a.getY()) * (c.getX() - a.getX())).toFloat();
}

bool bsp(const Point a, const Point b, const Point c, const Point point)
{
    float cross1 = crossProduct(a, b, point);
    float cross2 = crossProduct(b, c, point);
    float cross3 = crossProduct(c, a, point);
    bool hasSameSign1 = (cross1 >= 0 && cross2 >= 0 && cross3 >= 0);
    bool hasSameSign2 = (cross1 <= 0 && cross2 <= 0 && cross3 <= 0);

    return (hasSameSign1 || hasSameSign2);
}
