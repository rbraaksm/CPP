/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/04 11:49:36 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/04 12:04:31 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria{
	public:
		Ice();
		Ice(const Ice &cpy);
		Ice &operator=(const Ice &nw);
		virtual ~Ice();
		Ice*	clone(void) const;
		void 	use(ICharacter& target);
};

#endif