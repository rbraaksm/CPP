/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/18 16:07:58 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/01/19 08:59:27 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class ZombieHorde{
	Zombie	*_zombie;
	int		_total;
	public:
		ZombieHorde();
		ZombieHorde(int);
		~ZombieHorde();
		void 		announce();
		std::string randomChump();
};
#endif
