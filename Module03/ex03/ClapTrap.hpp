/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/13 10:36:14 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/23 10:57:29 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# define YEL "\x1b[33;01m"
# define BLU "\x1b[34;01m"
# define RED "\x1b[31;01m"
# define BLK "\x1b[0m"
# define GRN "\x1b[32;01m"
# define PUR "\x1b[35;01m"
# define CYA "\x1b[36;01m"

class ClapTrap{
	protected:
		unsigned int	_hitPoints;
		unsigned int	_maxHitPoints;
		unsigned int	_energyPoints;
		unsigned int	_maxEnergyPoints;
		int				_level;
		std::string		_name;
		std::string		_C;
		unsigned int	_meleeAttackDamage;
		unsigned int	_rangedAttackDamage;
		unsigned int	_armorDamageReduction;
		unsigned int	_tackleAttack;
		unsigned int	_tailWhip;
		unsigned int	_rollAttack;
		unsigned int	_quickAttack;
		unsigned int	_slamAttack;
		unsigned int	_attack;
	public:
		ClapTrap(void);
		ClapTrap(std::string const name);
		ClapTrap(const ClapTrap& cpy);
		ClapTrap &operator=(const ClapTrap& nw);
		~ClapTrap(void);
		void		beRepaired(unsigned int amount);
		void		printStatus(int n);
		void		printMissed(std::string attacker, std::string target);
		std::string	getName(void) const;
};
#endif
