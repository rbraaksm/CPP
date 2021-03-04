/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RadScorpion.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbraaksm <rbraaksm@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/03 10:33:22 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/03 10:34:54 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPIONN_HPP
# define RADSCORPIONN_HPP

# include "Enemy.hpp"

class RadScorpion : public Enemy{
        public:
        RadScorpion();
        RadScorpion(const RadScorpion &cpy);
        RadScorpion &operator=(const RadScorpion &nw);
        virtual ~RadScorpion();
        void    takeDamage(int n);
};
#endif