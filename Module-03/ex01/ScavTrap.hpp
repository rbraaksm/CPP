/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/12 09:12:43 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/01/26 11:16:11 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "FragTrap.hpp"

class ScavTrap{
	unsigned int	_hitPoints;
	unsigned int	_maxHitPoints;
	unsigned int	_energyPoints;
	unsigned int	_maxEnergypoints;
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
		ScavTrap(void);
		ScavTrap(std::string const name);
		ScavTrap(const ScavTrap& cpy);
		ScavTrap  &operator=(ScavTrap const& other);
		~ScavTrap(void);
		void		rangedAttack(std::string const& target);
		void		meleeAttack(std::string const& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		void		challengeNewcomer(std::string const& target);
		void		printStatus(int n);
		void		printMissed(std::string attacker, std::string target);
};
#endif