/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/18 16:17:41 by rbraaksm      #+#    #+#                 */
/*   Updated: 2020/12/18 19:01:33 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

void	test_horde1(int index){
	std::cout << "\x1b[32;01mTEST HORDE1\x1b[0m" << std::endl;
	index = rand() % 20 + 2;
	ZombieHorde horde1(index);
	horde1.announce();
	std::cout << std::endl << "\x1b[31;01mDestructer\x1b[0m" << std::endl;
}

void	test_horde2(int index){
	std::cout << "\x1b[32;01mTEST HORDE2\x1b[0m" << std::endl;
	index = rand() % 20 + 2;
	ZombieHorde horde1(index);
	horde1.announce();
	std::cout << std::endl << "\x1b[31;01mDestructer\x1b[0m" << std::endl;
}

int		main(void){
	int index;
	index = 0;
	srand(time(NULL));
	test_horde1(index);
	std::cout << std::endl << "\x1b[34;01mSECOND HORDE\x1b[0m" << std::endl;
	test_horde1(index);
}
