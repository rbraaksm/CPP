/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/05 12:11:13 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/05 17:00:15 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"
# include <iostream>

class Bureaucrat;

class Form{
	bool				_signed;
	const std::string	_name;
	const int			_gradeExec;
	const int			_gradeSign;
	public:
		Form();
		Form(const std::string name, int gradeExec, int gradeSign);
		Form(const Form &cpy);
		Form& operator=(const Form &nw);
		virtual ~Form();
		const std::string&	getName() const;
		const int&			getGradeExec() const;
		const int&			getGradeSign() const;
		bool				getSigned() const;
		void				beSigned(const Bureaucrat &nw);

	class GradeTooHighException : public std::exception{
		virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception{
		virtual const char* what() const throw();
	};

};

std::ostream& operator<<(std::ostream &output, const Form &form);

#endif
