/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PowerFist.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/02 14:54:36 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/03 10:52:24 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include "AWeapon.hpp"

class PowerFist : public AWeapon{
	public:
		PowerFist();
		PowerFist(const PowerFist &cpy);
		virtual ~PowerFist();
		void	attack() const;
};

#endif