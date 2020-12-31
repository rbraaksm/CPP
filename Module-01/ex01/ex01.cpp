/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ex01.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/17 21:27:13 by rbraaksm      #+#    #+#                 */
/*   Updated: 2020/12/17 21:35:26 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void memoryLeak() {
	std::string*        panther = new std::string("String panther");
	std::cout << *panther << std::endl;
	delete panther;
}
