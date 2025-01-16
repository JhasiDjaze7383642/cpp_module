/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 08:05:03 by rarakoto          #+#    #+#             */
/*   Updated: 2025/01/16 13:14:58 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CHARACTER_HPP__
# define __CHARACTER_HPP__
# include <string>
# include "debug.h"
# include "AMateria.hpp"

# define MAX_INVENTORY 4
# define MAX_UNUSED_MAT 32

class Character : public ICharacter
{
private:
	std::string 	name;
	AMateria		*inventory[MAX_INVENTORY];
	AMateria		*unused_mat[MAX_UNUSED_MAT];
	int				unused_mat_last_index;

public:
	Character(void);
	Character(std::string name);
	Character(const Character &other);
	Character			&operator=(const Character &other);
	~Character(void);
	std::string const	&getName(void) const;
	void				equip(AMateria* m);
	void				unequip(int idx);
	void				use(int idx, ICharacter& target);
	void				print_inventory(void) const;
	void				print_unused_mat(void) const;
};

#endif
