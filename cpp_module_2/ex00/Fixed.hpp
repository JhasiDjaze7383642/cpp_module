/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 09:16:07 by rarakoto          #+#    #+#             */
/*   Updated: 2024/12/17 09:23:14 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_HPP
# define __FIXED_HPP
# include <iostream>

class Fixed
{
private:
	int			value;
	const int	fractionnal_value;

public:
	Fixed(void);
	Fixed(int value);
	Fixed(const Fixed &other);
	Fixed&	operator=(const Fixed &other);
	~Fixed(void);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif
