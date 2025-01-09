/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 09:20:15 by rarakoto          #+#    #+#             */
/*   Updated: 2025/01/09 09:23:22 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : value(0), fractionnal_value(8)
{
	std::cout << "Default constructor called\n";
};

Fixed::~Fixed(void)
{
	std::cout << "Destructor called\n";
}

Fixed::Fixed(const Fixed &other) : value(other.value), fractionnal_value(8)
{
	std::cout << "Copy constructor called\n";
};

Fixed&	Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &other)
		this->value = other.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return (this->value);
}

void	Fixed::setRawBits(int const raw)
{
	this->value = raw;
}
