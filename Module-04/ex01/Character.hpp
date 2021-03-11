/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/03 10:40:36 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/05 12:38:40 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character{
    std::string _name;
    int         _ap;
    AWeapon     *_weapon;
    public:
        Character();
        Character(std::string const &name);
        Character(const Character &cpy);
        Character &operator=(const Character &nw);
        ~Character();
        void    recoverAP();
        void    equip(AWeapon *wp);
        void    attack(Enemy *en);
        std::string const   getName() const;
        AWeapon             *getWeapon() const;
        int                 getAP() const;
};

std::ostream &operator<<(std::ostream &output, Character const &nw);

#endif
