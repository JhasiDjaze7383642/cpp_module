/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 07:34:21 by rarakoto          #+#    #+#             */
/*   Updated: 2024/12/18 09:30:33 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __POINT_HPP__
# define __POINT_HPP__
# include "Fixed.hpp"
#include <fstream>

class Point
{
private:
	const Fixed x;
	const Fixed y;

public:
	Point(void);
	Point(float x, float y);
	Point(const Point &other);
	~Point(void);
	Point		&operator=(const Point &other);
	bool 		operator==(Point other) const;
	bool 		operator!=(Point other) const;
	Point		operator-(Point other) const;
	Point		operator*(Point other) const;

	const Fixed	&getX(void) const;
	const Fixed	&getY(void) const;
	Point		getNormal(void);
};

std::ostream	&operator<<(std::ostream &os, const Point &obj);

#endif
