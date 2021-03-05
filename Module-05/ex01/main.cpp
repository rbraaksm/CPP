/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/05 11:06:25 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/05 17:37:21 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void){
	std::cout <<  "--- Create two Bureacrats with a valid grade ---" << std::endl;
	Bureaucrat one("Micheal", 90);
	std::cout << one << std::endl;
	Bureaucrat two("Katie", 140);
	std::cout << two << std::endl;

	std::cout << "--- Trying to create some forms with an execute grade too high ---" << std::endl;
	try{
		Form rene("rene", 0, 100);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try{
		Form rene("rene", -1, 100);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl <<  "--- Trying to create some forms with a signed grade too high ---" << std::endl;
	try{
		Form rene("rene", 100, 0);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try{
		Form rene("rene", 100, -1);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << "--- Trying to create some forms with an execute grade too low ---" << std::endl;
	try{
		Form rene("rene", 151, 100);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try{
		Form rene("rene", 600, 100);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl <<  "--- Trying to create some forms with a signed grade too low ---" << std::endl;
	try{
		Form rene("rene", 100, 151);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try{
		Form rene("rene", 100, 600);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl <<  "--- Create a valid form ---" << std::endl;
	try{
		Form form1("form1", 10, 130);
		std::cout << form1;
		std::cout << one;
		std::cout << "--> Bureaucrat will sign the form" << std::endl;
		one.signForm(form1);
		std::cout << one;
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	// try{
	// 	std::cout << std::endl;
	// 	Bureaucrat rene("rene", 150);
	// 	std::cout << rene;
	// 	std::cout << "--> An unvalid decrement" << std::endl;
	// 	rene.decrementGrade();
	// }
	// catch(std::exception &e){
	// 	std::cout << e.what() << std::endl;
	// }
	// try{
	// 	std::cout << std::endl;
	// 	Bureaucrat rene("rene", 150);
	// 	std::cout << rene;
	// 	std::cout << "--> A valid increment" << std::endl;
	// 	rene.incrementGrade();
	// 	std::cout << rene;
	// 	rene.incrementGrade();
	// 	std::cout << rene;
	// 	std::cout << "--> A valid decrement" << std::endl;
	// 	rene.decrementGrade();
	// 	std::cout << rene;
	// 	rene.decrementGrade();
	// 	std::cout << rene;
	// }
	// catch(std::exception &e){
	// 	std::cout << e.what() << std::endl;
	// }
	// std::cout << std::endl <<  "--- Create a Bureacrat with a copy constructor ---" << std::endl;
	// try{
	// 	Bureaucrat rene("rene", 150);
	// 	Bureaucrat rene2(rene);
	// 	std::cout << rene;
	// 	std::cout << rene2;
	// }
	// catch(std::exception &e){
	// 	std::cout << e.what() << std::endl;
	// }
	// std::cout << std::endl <<  "--- Create a Bureacrat with a copy constructor ---" << std::endl;
	// try{
	// 	Bureaucrat test1("test1", 150);
	// 	Bureaucrat test2("test2", 130);
	// 	std::cout << test1;
	// 	std::cout << test2;
	// 	test1 = test2;
	// 	std::cout << test1;
	// 	std::cout << test2;
	// }
	// catch(std::exception &e){
	// 	std::cout << e.what() << std::endl;
	// }
	std::cout << std::endl << "---- DESTRUCTOR ----" << std::endl;
}
