/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 14:45:05 by rarakoto          #+#    #+#             */
/*   Updated: 2024/12/14 17:48:13 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie
{
private:
	std::string	name;

public:
	Zombie(std::string name);
	~Zombie(void);
	Zombie(const Zombie& other);
	Zombie& operator=(const Zombie& other);
	void			announce(void);
	static Zombie	*zombieHorde(int n, std::string name);
};

#endif
