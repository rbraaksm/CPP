/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Water.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/04 11:41:11 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/03/04 13:32:24 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WATER_HPP
# define WATER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>
#include <string>

class Water : public AMateria
{
	public:

		Water();
		Water(const Water &cpy);
		Water& operator=(const Water&nw);
		virtual ~Water();
		std::string const& 	getType() const;
		unsigned int 		getXP() const;
		virtual Water*		clone() const;
		virtual void		use(ICharacter &target);
};

#endif
