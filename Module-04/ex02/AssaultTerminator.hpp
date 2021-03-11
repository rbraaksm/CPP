/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AssaultTerminator.hpp                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/04 10:48:20 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/05 12:39:31 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATER_HPP
# define ASSAULTTERMINATER_HPP

# include <iostream>
# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine{
	public:
		AssaultTerminator();
		AssaultTerminator(const AssaultTerminator &cpy);
		virtual ~AssaultTerminator();
		AssaultTerminator*	clone() const;
		AssaultTerminator&	operator=(const AssaultTerminator &obj);
		void				battleCry() const;
		void				rangedAttack() const;
		void				meleeAttack() const;
};

# endif
