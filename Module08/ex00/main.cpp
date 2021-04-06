/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/11 12:06:03 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/11 12:37:15 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main(void){
	std::cout << "----> Vector: looking for number 5 <----" << std::endl;
	std::vector<int> vec;
	for (int i = 0; i < 9; i++)
		vec.push_back(i);
	print(vec);
	easyfind(vec, 5);

	std::cout << std::endl << "----> Vector: looking for number 12 <----" << std::endl;
	for (int i = 0; i < 9; i++)
		vec.push_back(i);
	print(vec);
	try{easyfind(vec, 12);}
	catch(std::exception &e){std::cout << e.what() << std::endl;}

	std::cout << std::endl << "----> List: looking for number 5 <----" << std::endl;
	std::list<int> lst;
	for (int i = 0; i < 9; i++)
		lst.push_back(i);
	print(lst);
	easyfind(lst, 5);

	std::cout << std::endl << "----> List: looking for number 12 <----" << std::endl;
	for (int i = 0; i < 9; i++)
		lst.push_back(i);
	print(lst);
	try{easyfind(lst, 12);}
	catch(std::exception &e){std::cout << e.what() << std::endl;}
	return (0);
}
