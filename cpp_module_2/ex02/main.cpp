/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 10:46:16 by rarakoto          #+#    #+#             */
/*   Updated: 2025/01/09 09:40:03 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	Fixed	a;
	Fixed const	b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed	c;

	std::cout << "Initialization, post-pre decrementation test ---\\\n";
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << "Arithmetic operation on fixed point number test ---\\\n";
	std::cout << "Fixed(1000.0f) + Fixed(413.0f): " << Fixed(1000.0f) + Fixed(413.0f) << std::endl;
	std::cout << "Fixed(1000.0f) - Fixed(550.0f): " << Fixed(1000.0f) - Fixed(550.0f) << std::endl;
	std::cout << "Fixed(15.2345f) * Fixed(3.75f): " << Fixed(15.2345f) * Fixed(3.75f) << std::endl;
	std::cout << "Fixed(123.0f) / Fixed(359.0f): " << Fixed(123.0f) / Fixed(359.0f) << std::endl;
	std::cout << "Max and min test ---\\\n";
	std::cout << "max(Fixed(31), Fixed(421.23f)): " << Fixed::max( 31, 421.23f ) << std::endl;
	std::cout << "max(Fixed(1345.21f), Fixed(1345.35f)): " << Fixed::max( 1345.21f, 1345.35f ) << std::endl;
	std::cout << "min(Fixed(31), Fixed(421.23f)): " << Fixed::min( 31, 412.23f ) << std::endl;
	std::cout << "min(Fixed(1345.21f), Fixed(1345.35f)): " << Fixed::min( 1345.21f, 1345.35f ) << std::endl;
	std::cout << "Comparison test ---\\\n";
	std::cout << "a > b: " << (a > b) << std::endl;
	std::cout << "a < b: " << (a < b) << std::endl;
	std::cout << "a <= b: " << (a <= b) << std::endl;
	std::cout << "a >= b: " << (a >= b) << std::endl;
	std::cout << "a != b: " << (a != b) << std::endl;
	a = b;
	std::cout << "a == b: " << (a == b) << std::endl;
	std::cout << "a <= b: " << (a <= b) << std::endl;
	std::cout << "a >= b: " << (a >= b) << std::endl;
	return (0);
}
