/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 09:20:15 by rarakoto          #+#    #+#             */
/*   Updated: 2024/12/17 12:04:57 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void) : value(0), fractionnal_value(8)
{
	std::cout << "Default constructor called.\n";
};

Fixed::Fixed(const int value) : value(value * (1 << 8)), fractionnal_value(8)
{
	std::cout << "Int constructor called.\n";
};

Fixed::Fixed(const float value) : value(value * (1 << 8)), fractionnal_value(8)
{
	std::cout << "Float constructor called.\n";
};

Fixed::~Fixed(void)
{
	std::cout << "Deconstructor called.\n";
}

Fixed::Fixed(const Fixed &other) : value(other.value), fractionnal_value(8)
{
	std::cout << "Copy constructor called.\n";
};

Fixed&	Fixed::operator=(const Fixed &other)
{
	if (this != &other)
		this->value = other.value;
	std::cout << "Copy assignement operator called.\n";
	return (*this);
}

std::ostream	&operator<<(std::ostream &os, const Fixed& obj)
{
	os << static_cast<float>(roundf(obj.getRawBits()) / (1 << 8));
	return (os);
}

int		Fixed::getRawBits(void) const
{
	return (this->value);
}

void	Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(value >> fractionnal_value));
}

int		Fixed::toInt(void) const
{
	return (static_cast<int>(value >> fractionnal_value));
}
