/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/05 13:57:48 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/17 14:22:00 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# define YEL "\x1b[33;01m"
# define BLU "\x1b[34;01m"
# define RED "\x1b[31;01m"
# define BLK "\x1b[0m"
# define GRN "\x1b[32;01m"
# define PUR "\x1b[35;01m"
# define CYA "\x1b[36;01m"

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