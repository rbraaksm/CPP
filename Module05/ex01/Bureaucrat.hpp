/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/04 21:50:53 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/30 14:03:53 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat{
	const std::string	_name;
	int					_grade;
	Bureaucrat();
	public:
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(const Bureaucrat &cpy);
		Bureaucrat& operator=(const Bureaucrat &nw);
		virtual ~Bureaucrat();
		std::string const&	getName() const;
		int					getGrade() const;
		void				incrementGrade();
		void				decrementGrade();
		void				signForm(const Form &form) const;

	class GradeTooHighException : public std::exception{
		virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception{
		virtual const char* what() const throw();
	};
};

std::ostream&		operator<<(std::ostream &output, Bureaucrat const &bureaucrat);

#endif
