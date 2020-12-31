/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/28 17:51:13 by rbraaksm      #+#    #+#                 */
/*   Updated: 2020/12/28 17:55:33 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int		main(void)
{
    {
        Weapon    club = Weapon("crude spiked club");
        HumanA    bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    // {
    //     Weapon    club = Weapon("crude spiked club");
    //     HumanB    jim("Jim");
    //     jim.setWeapon(club);
    //     jim.attack();
    //     club.setType("some other type of club");
    //     jim.attack();
    // }
}