/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/05 13:57:48 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/23 10:59:40 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap{
	public:
		FragTrap(void);
		FragTrap(std::string const name);
		FragTrap(const FragTrap& cpy);
		FragTrap  &operator=(FragTrap const& nw);
		virtual ~FragTrap(void);
		void			rangedAttack(std::string const& target);
		void			meleeAttack(std::string const& target);
		void			takeDamage(unsigned int amount);
		void			vaulthunter_dot_exe(std::string const& target);
		void			reduceEnergy(void);
		void			printAttack(std::string attacker, std::string target, int amount);
		std::string		getPokemon(void) const;
		unsigned int	getDamage(void) const;
		unsigned int	setDamage(int i);
		int				getHP(void) const;
		int				getReduction(void) const;
		unsigned int	getRAD(void) const;
		unsigned int	getDR(void) const;
};
#endif
