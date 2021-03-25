/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/03 10:08:48 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/25 14:20:17 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>

class Enemy{
    int         _hp;
    std::string _type;
    Enemy();
    public:
        Enemy(int hp, std::string const &type);
        Enemy(const Enemy &cpy);
        Enemy &operator=(const Enemy &nw);
        virtual ~Enemy();
        int getHP() const;

        virtual void    takeDamage(int n);
        std::string    getType() const;
};

#endif
