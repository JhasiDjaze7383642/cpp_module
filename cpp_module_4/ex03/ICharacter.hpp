/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 14:12:24 by rarakoto          #+#    #+#             */
/*   Updated: 2025/01/06 14:32:59 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ICHARACTER__HPP__
# define __ICHARACTER__HPP__

class ICharacter
{
private:
	AMateria	*items[4];

public:
	ICharacter(void);
	ICharacter(const ICharacter &other);
	ICharacter	&operator=(const ICharacter &other);
	~ICharacter(void);
};

#endif // !__ICHARACTER__HPP__
