/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/12 09:12:43 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/01/12 15:15:22 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "FragTrap.hpp"

class ScavTrap{
	public:
			ScavTrap();
			ScavTrap(std::string);
			ScavTrap  &operator=(ScavTrap const&);
			~ScavTrap();
			void				rangedAttack(std::string const & target);
			void				meleeAttack(std::string const & target);
			void				takeDamage(unsigned int amount);
			void				beRepaired(unsigned int amount);
			void				challengeNewcomer(std::string const &target);
			void				reduceEnergy();
			void				printAttack(std::string, std::string, int);
			void				printStatus(int);
			std::string			getPokemon();
			unsigned int		getDamage();
			unsigned int		setDamage(int);
			int					getHP();
			int					getReduction();
		private:
			unsigned int		hitPoints;
			unsigned int		maxHitPoints;
			unsigned int		energyPoints;
			unsigned int		maxEnergypoints;
			int					level;
			std::string			name;
			std::string			C;
			unsigned int		meleeAttackDamage;
			unsigned int		rangedAttackDamage;
			unsigned int		armorDamageReduction;
			unsigned int		tackleAttack;
			unsigned int		tailWhip;
			unsigned int		rollAttack;
			unsigned int		quickAttack;
			unsigned int		slamAttack;
			unsigned int		attack;
};
#endif