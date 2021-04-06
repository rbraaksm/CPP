/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.hpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/08 13:57:33 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/30 14:05:49 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class RobotomyRequestForm : public Form{
	std::string	_target;
	RobotomyRequestForm();
	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const &cpy);
		RobotomyRequestForm& operator=(RobotomyRequestForm const &nw);
		virtual ~RobotomyRequestForm();
		void	execute(Bureaucrat const &executor) const;
};
#endif
