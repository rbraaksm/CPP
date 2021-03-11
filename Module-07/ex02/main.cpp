/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/11 09:48:11 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/11 11:40:02 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main(void){
	Array<int> first;
	first.print();
	std::cout << "Size of array: " << first.size() << std::endl << std::endl;

	Array<int> second(5);
	second[0] = 0;
	second[1] = 1;
	second[2] = 2;
	second[3] = 3;
	second[4] = 4;
	second.print();
	std::cout << "Size of array: " << second.size() << std::endl << std::endl;

	Array<char> third(5);
	third[0] = 'C';
	third[1] = 'O';
	third[2] = 'D';
	third[3] = 'A';
	third[4] = 'M';
	third.print();
	std::cout << "Size of array: " << third.size() << std::endl << std::endl;

	try{
		Array<std::string> fourth(4);
		fourth[0] = "Codam";
		fourth[1] = "is";
		fourth[2] = "really";
		fourth[3] = "fun!";
		fourth[4] = "Right?";
		fourth.print();
		std::cout << "Size of array: " << fourth.size() << std::endl << std::endl;
	}
	catch (std::exception &e){std::cout << e.what() << std::endl;};

	std::cout << std::endl << "----> Copy constructor <----" << std::endl;
	Array<char> fourth;
	fourth = third;
	std::cout << "Printing third:\t ";
	third.print();
	std::cout << "Printing fourth: ";
	fourth.print();
	std::cout << "Changing third to ARTIS" << std::endl;
	third[0] = 'A';
	third[1] = 'R';
	third[2] = 'T';
	third[3] = 'I';
	third[4] = 'S';
	std::cout << "Printing third:\t ";
	third.print();
	std::cout << "Printing fourth: ";
	fourth.print();

	std::cout << std::endl << "----> Leaks <----" << std::endl;
	system("leaks array");
	return (0);
}
