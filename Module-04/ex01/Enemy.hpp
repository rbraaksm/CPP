/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbraaksm <rbraaksm@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/03 10:08:48 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/03 11:18:08 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>

class Enemy{
    int         _hp;
    std::string _type;
    public:
        Enemy();
        Enemy(int hp, std::string const &type);
        Enemy(const Enemy &cpy);
        Enemy &operator=(const Enemy &nw);
        virtual ~Enemy();
        int getHP() const;

        virtual void    takeDamage(int n);
        std::string    getType() const;
};

#endif
