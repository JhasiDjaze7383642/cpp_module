/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 07:49:15 by rarakoto          #+#    #+#             */
/*   Updated: 2025/01/08 13:22:47 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float crossProduct(const Point& A, const Point& B, const Point& C)
{
    return ((B.getX() - A.getX()) * (C.getY() - A.getY()) - (B.getY() - A.getY()) * (C.getX() - A.getX())).toFloat();
}

bool bsp(const Point A, const Point B, const Point C, const Point P)
{
    float cross1 = crossProduct(A, B, P);
    float cross2 = crossProduct(B, C, P);
    float cross3 = crossProduct(C, A, P);
    bool hasSameSign1 = (cross1 >= 0 && cross2 >= 0 && cross3 >= 0);
    bool hasSameSign2 = (cross1 <= 0 && cross2 <= 0 && cross3 <= 0);

    return (hasSameSign1 || hasSameSign2);
}
