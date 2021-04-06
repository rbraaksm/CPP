/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.hpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/08 13:38:42 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/30 14:05:27 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form{
	std::string	_target;
	PresidentialPardonForm();
	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const &cpy);
		PresidentialPardonForm& operator=(PresidentialPardonForm const &nw);
		virtual ~PresidentialPardonForm();
		void	execute(Bureaucrat const &executor) const;
};
#endif
