/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 09:16:07 by rarakoto          #+#    #+#             */
/*   Updated: 2024/12/20 10:14:59 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_HPP
# define __FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed
{
private:
	int			value;
	const int	fractionnal_value;

public:
	Fixed(void);
	Fixed(const int value);
	Fixed(const float value);
	Fixed(const Fixed &other);
	Fixed				&operator=(const Fixed &other);
	Fixed				&operator++(void);
	Fixed				&operator--(void);
	Fixed				operator++(int);
	Fixed				operator--(int);
	~Fixed(void);
	bool				operator>(Fixed b) const;
	bool				operator<(Fixed b) const;
	bool				operator>=(Fixed b) const;
	bool				operator<=(Fixed b) const;
	bool				operator==(Fixed b) const;
	bool				operator!=(Fixed b) const;
	Fixed				operator+(Fixed b) const;
	Fixed				operator-(Fixed b) const;
	Fixed				operator*(Fixed b) const;
	Fixed				operator/(Fixed b) const;

	int					getRawBits(void) const;
	void				setRawBits(int const raw);
	float				toFloat(void) const;
	int					toInt(void) const;
	static Fixed		&min(Fixed &a, Fixed &b);
	static Fixed const 	&min(Fixed const &a, Fixed const &b);
	static Fixed		&max(Fixed &a, Fixed &b);
	static Fixed const	&max(Fixed const &a, Fixed const &b);

};

std::ostream			&operator<<(std::ostream &os, const Fixed& obj);

#endif
