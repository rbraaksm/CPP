/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   TacticalMarine.hpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/04 10:45:27 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/04 10:56:26 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include <iostream>
# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine{
	public:
		TacticalMarine();
		TacticalMarine(const TacticalMarine &cpy);
		virtual ~TacticalMarine();
		TacticalMarine*	clone() const;
		TacticalMarine&	operator=(const TacticalMarine &obj);
		void			battleCry() const;
		void			rangedAttack() const;
		void			meleeAttack() const;
};

#endif