/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/15 11:40:17 by rbraaksm      #+#    #+#                 */
/*   Updated: 2020/12/15 21:01:23 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>

class Contact{
	private:
	std::string	firstName;
	std::string	lastName;
	std::string	nickName;
	std::string	login;
	std::string	postalAddress;
	std::string	emailAddress;
	std::string	phoneNumber;
	std::string	birthdayDate;
	std::string	favoriteMeal;
	std::string	underwearColor;
	std::string	darkestSecret;

	public:
	void		setFirstName(const std::string &firstName);
	void		setLastName(const std::string &lastName);
	void		setNickName(const std::string &nickName);
	void		setLogin(const std::string &login);
	void		setPostalAddress(const std::string &postalAddress);
	void		setEmailAddress(const std::string &emailAddress);
	void		setPhoneNumber(const std::string &phoneNumber);
	void		setBirthdayDate(const std::string &birthdayDate);
	void		setFavoriteMeal(const std::string &favoriteMeal);
	void		setUnderwearColor(const std::string &underwearColor);
	void		setDarkestSecret(const std::string &darkestSecret);
	void		findLength();
	std::string	getFirstName();
	std::string	getLastName();
	std::string	getNickName();
	std::string	leftOver(std::string line, int length);

	size_t		length;
	void		print_contact_total();
};

#endif
