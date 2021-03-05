/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/05 11:06:25 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/05 12:06:53 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void){
	std::cout << "--- Trying to make a some Bureacrats with a grade too high ---" << std::endl;
	try{
		Bureaucrat rene("rene", 0);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try{
		Bureaucrat rene("rene", -1);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl <<  "--- Trying to make a some Bureacrats with a grade too low ---" << std::endl;
	try{
		Bureaucrat rene("rene", 600);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try{
		Bureaucrat rene("rene", 151);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl <<  "--- Create a Bureacrat with a valid grade ---" << std::endl;
	try{
		Bureaucrat rene("rene", 1);
		std::cout << rene;
		std::cout << "--> An unvalid increment" << std::endl;
		rene.incrementGrade();
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try{
		std::cout << std::endl;
		Bureaucrat rene("rene", 150);
		std::cout << rene;
		std::cout << "--> An unvalid decrement" << std::endl;
		rene.decrementGrade();
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try{
		std::cout << std::endl;
		Bureaucrat rene("rene", 150);
		std::cout << rene;
		std::cout << "--> A valid increment" << std::endl;
		rene.incrementGrade();
		std::cout << rene;
		rene.incrementGrade();
		std::cout << rene;
		std::cout << "--> A valid decrement" << std::endl;
		rene.decrementGrade();
		std::cout << rene;
		rene.decrementGrade();
		std::cout << rene;
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl <<  "--- Create a Bureacrat with a copy constructor ---" << std::endl;
	try{
		Bureaucrat rene("rene", 150);
		Bureaucrat rene2(rene);
		std::cout << rene;
		std::cout << rene2;
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl <<  "--- Create a Bureacrat with a copy constructor ---" << std::endl;
	try{
		Bureaucrat test1("test1", 150);
		Bureaucrat test2("test2", 130);
		std::cout << test1;
		std::cout << test2;
		test1 = test2;
		std::cout << test1;
		std::cout << test2;
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
}