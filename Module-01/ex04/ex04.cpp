/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ex04.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/18 19:08:51 by rbraaksm      #+#    #+#                 */
/*   Updated: 2020/12/27 22:29:14 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(void){
	std::string	str = "HI THIS IS BRAIN";
	std::cout << "String    : " << str << std::endl;

	std::string *pointer = &str;
	std::cout << "Pointer   : " << pointer << std::endl;

	std::string &reference = str;
	std::cout << "Reference : " << reference << std::endl;
}
