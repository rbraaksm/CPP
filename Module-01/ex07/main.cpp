/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/04 13:24:25 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/01/04 15:52:46 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"


int		main(int argc, char **argv){
	Replace a;

	if (argc == 4){
		a.setClass(argv[1], argv[2], argv[3]);
		a.replaceWords();
	}
	else
		std::cout << "executable FILE <string1> <string2>" << std::endl;
}