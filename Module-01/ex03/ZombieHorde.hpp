/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/18 16:07:58 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/01/13 09:55:53 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class ZombieHorde{
	public:
		ZombieHorde();
		ZombieHorde(int);
		~ZombieHorde();
		void announce();
		std::string randomChump();
	private:
		Zombie	*_zombie;
		int		_total;
};
#endif
