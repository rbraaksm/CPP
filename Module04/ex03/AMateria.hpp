/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/04 11:25:30 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/25 14:23:54 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class AMateria{
	std::string		_type;
	unsigned int	_xp;
	AMateria();
	public:
		AMateria(std::string const &type);
		AMateria(const AMateria &cpy);
		AMateria &operator=(const AMateria &nw);
		virtual ~AMateria();
		std::string const&	getType() const;
		unsigned int		getXP() const;
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter &target);
		void				setXP(unsigned int xp);
		void				setType(std::string type);
};

#endif
