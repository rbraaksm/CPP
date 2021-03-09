/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/08 17:05:51 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/09 11:35:31 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"

class Intern{
	public:
		Intern();
		Intern(Intern const &cpy);
		Intern& operator=(Intern const &nw);
		virtual ~Intern();
		Form*	makeForm(std::string const form, std::string const target);
		typedef Form* (Intern::*retP)(std::string const target);
	private:
		retP	_func[3];
		Form*	retPresidential(std::string const target) ;
		Form*	retShrubbery(std::string const target) ;
		Form*	retRobotomy(std::string const target) ;
};
#endif
