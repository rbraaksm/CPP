/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/05 13:57:48 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/01/12 15:05:59 by rbraaksm      ########   odam.nl         */
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
	public:
		FragTrap();
		FragTrap(std::string);
		FragTrap  &operator=(FragTrap const&);
		~FragTrap();
		void				rangedAttack(std::string const & target);
		void				meleeAttack(std::string const & target);
		void				takeDamage(unsigned int amount);
		void				beRepaired(unsigned int amount);
		void				vaulthunter_dot_exe(std::string const &target);
		void				reduceEnergy();
		void				printAttack(std::string, std::string, int);
		void				printStatus(int);
		std::string			getPokemon();
		unsigned int		getDamage();
		unsigned int		setDamage(int);
		unsigned int		setDamage1(int);
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