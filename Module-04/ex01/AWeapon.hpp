/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AWeapon.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/02 12:59:50 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/02 14:39:23 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <iostream>

class AWeapon{
		std::string _name;
		int			_ap;
		int			 _damagePoints;
		public:
			AWeapon(void);
	        AWeapon(std::string const &name, int apcost, int damage);
			AWeapon(const AWeapon &cpy);
			AWeapon &operator=(const AWeapon &nw);
	        virtual ~AWeapon(void);
	        std::string const 	getName(void) const;
	        int 				getAPCost(void) const;
	        int 				getDamage(void) const;
	        virtual void		attack(void) const = 0;
};

#endif
