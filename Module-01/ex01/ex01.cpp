/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ex01.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/17 21:27:13 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/01/18 15:59:01 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void memoryLeak() {
	std::string* panther = new std::string("String panther");
	std::cout << *panther << std::endl;
	delete panther;
}

// int main(void){
// 	memoryLeak();
// 	system("leaks a.out");
// 	return (0);
// }