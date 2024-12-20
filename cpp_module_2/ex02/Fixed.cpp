/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.82antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2028/12/17 08:20:15 by rarakoto          #+#    #+#             */
/*   Updated: 2024/12/20 12:53:40 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : value(0), fractionnal_value(8){};
Fixed::Fixed(const int value) : value(value * (1 << 8)), fractionnal_value(8) {};
Fixed::Fixed(const float value) : value(roundf(value * (1 << 8))), fractionnal_value(8) {};
Fixed::Fixed(const Fixed &other) : value(other.value), fractionnal_value(8) {};
Fixed::~Fixed(void) {};

Fixed&	Fixed::operator=(const Fixed &other)
{
	if (this != &other)
		this->value = other.value;
	return (*this);
}

bool	Fixed::operator>(Fixed b) const { return(this->getRawBits() > b.getRawBits()); };
bool	Fixed::operator<(Fixed b) const { return(this->getRawBits() < b.getRawBits()); };
bool	Fixed::operator>=(Fixed b) const { return(this->getRawBits() >= b.getRawBits()); };
bool	Fixed::operator<=(Fixed b) const { return(this->getRawBits() <= b.getRawBits()); };
bool	Fixed::operator==(Fixed b) const { return(this->getRawBits() == b.getRawBits()); };
bool	Fixed::operator!=(Fixed b) const { return(this->getRawBits() != b.getRawBits()); };

Fixed	Fixed::operator+(Fixed b) const
{
	Fixed	result;

	result = Fixed();
	result.setRawBits(getRawBits() + b.getRawBits());
	return (result);
}

Fixed	Fixed::operator-(Fixed b) const
{
	Fixed	result;

	result = Fixed();
	result.setRawBits(getRawBits() - b.getRawBits());
	return (result);
}

Fixed	Fixed::operator*(Fixed b) const
{
	Fixed	result;

	result = Fixed();
	result.setRawBits((getRawBits() * b.getRawBits()) >> 8);
	return (result);
}

Fixed	Fixed::operator/(Fixed b) const
{
	Fixed	result;

	result = Fixed();
	result.setRawBits((getRawBits() << 8) / b.getRawBits());
	return (result);
}

Fixed	&Fixed::operator++(void)
{
	setRawBits(getRawBits() + 1);
	return (*this);
}

Fixed	&Fixed::operator--(void)
{
	setRawBits(getRawBits() - 1);
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	copy_obj (*this);

	setRawBits(getRawBits() + 1);
	return (copy_obj);
}

Fixed	Fixed::operator--(int)
{
	Fixed	copy_obj (*this);

	setRawBits(getRawBits() - 1);
	return (copy_obj);
}

std::ostream	&operator<<(std::ostream &os, const Fixed& obj)
{
	os << obj.toFloat();
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
	return (static_cast<float>(value) / (1 << fractionnal_value));
}

int		Fixed::toInt(void) const
{
	return (static_cast<int>(value >> fractionnal_value));
}

Fixed		&Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

Fixed const 	&Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

Fixed		&Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

Fixed const 	&Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return (a);
	else
		return (b);
}
