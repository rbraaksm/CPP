/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/05 13:57:48 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/01/14 12:41:41 by rbraaksm      ########   odam.nl         */
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

class FragTrap{
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
		FragTrap();
		FragTrap(std::string);
		FragTrap  &operator=(FragTrap const&);
		~FragTrap();
		void			rangedAttack(std::string const & target);
		void			meleeAttack(std::string const & target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		void			vaulthunter_dot_exe(std::string const &target);
		void			reduceEnergy();
		void			printAttack(std::string, std::string, int);
		void			printStatus(int);
		void			printMissed(std::string, std::string);
		std::string		getPokemon();
		unsigned int	getDamage();
		unsigned int	setDamage(int);
		int				getHP();
		int				getReduction();
};
#endif