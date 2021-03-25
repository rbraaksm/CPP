/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AWeapon.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/02 12:59:50 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/25 14:19:52 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <iostream>

class AWeapon{
		std::string _name;
		int			_ap;
		int			 _damagePoints;
		AWeapon();
		public:
	        AWeapon(std::string const &name, int apcost, int damage);
			AWeapon(const AWeapon &cpy);
			AWeapon &operator=(const AWeapon &nw);
	        virtual ~AWeapon();
	        std::string const 	getName() const;
	        int 				getAPCost() const;
	        int 				getDamage() const;
	        virtual void		attack() const = 0;
};

#endif
