/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/04 12:05:37 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/04 12:05:57 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria{
	public:
		Cure();
		Cure(const Cure &cpy);
		Cure &operator=(const Cure &nw);
		virtual ~Cure();
		Cure*	clone(void) const;
		void 	use(ICharacter& target);
};

#endif