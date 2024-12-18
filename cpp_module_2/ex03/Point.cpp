/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 07:37:57 by rarakoto          #+#    #+#             */
/*   Updated: 2024/12/18 09:59:30 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : x(Fixed()), y(Fixed()) {};
Point::Point(float x, float y) : x(Fixed(x)), y(Fixed(y)) {};
Point::Point(const Point &other) : x(other.x), y(other.y) {};
Point::~Point(void) {};

Point	&Point::operator=(const Point &other)
{
	if (this != &other)
		return (*this);
	return (*this);
};

bool	Point::operator==(Point other) const
{
	return ((x == other.x) && (y == other.y));
}

bool	Point::operator!=(Point other) const
{
	return ((x != other.x) && (y != other.y));
}

Point	Point::operator-(Point other) const
{
	return (Point(x - other.x, y - other.y));
}

Point	Point::operator*(Point other) const
{
	return (Point(x * other.x, y * other.y));
}

const Fixed	&Point::getX(void) const
{
	return (x);
}

const Fixed	&Point::getY(void) const
{
	return (y);
}

std::ostream	&operator<<(std::ostream &os, const Point &obj)
{
	os << "(" << obj.getX() << ", " << obj.getY() << ")" << std::endl;
	return (os);
}

Point		Point::getNormal(void)
{
	return (Point(-1 * y.toFloat(), x.toFloat()));
}
