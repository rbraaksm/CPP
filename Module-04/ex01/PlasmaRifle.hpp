/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PlasmaRifle.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/02 14:28:33 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/05 12:38:54 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon{
	public:
		PlasmaRifle();
		PlasmaRifle(const PlasmaRifle &cpy);
		virtual ~PlasmaRifle();
		void	attack() const;
};

#endif
