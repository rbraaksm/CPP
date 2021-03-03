/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PowerFirst.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/02 14:54:36 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/02 14:54:59 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIRST_HPP
# define POWERFIRST_HPP

# include "AWeapon.hpp"

class PowerFirst : public AWeapon{
	public:
		PowerFirst();
		PowerFirst(const PowerFirst &cpy);
		virtual ~PowerFirst();
		void	attack() const;
};

#endif