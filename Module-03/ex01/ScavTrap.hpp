/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/12 09:12:43 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/01/14 12:58:22 by rbraaksm      ########   odam.nl         */
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
		ScavTrap();
		ScavTrap(std::string);
		ScavTrap  &operator=(ScavTrap const&);
		~ScavTrap();
		void		rangedAttack(std::string const & target);
		void		meleeAttack(std::string const & target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		void		challengeNewcomer(std::string const &target);
		void		printStatus(int);
		void		printMissed(std::string, std::string);
};
#endif