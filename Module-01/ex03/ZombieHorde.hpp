/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/18 16:07:58 by rbraaksm      #+#    #+#                 */
/*   Updated: 2020/12/18 18:08:25 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class ZombieHorde{
	Zombie	*_zombie;
	int		total;

	public:
		ZombieHorde(int);
		~ZombieHorde();
		void announce();
		std::string randomChump();
};
#endif
