/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/15 10:55:04 by rbraaksm      #+#    #+#                 */
/*   Updated: 2020/12/15 21:12:47 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

const 		std::string	readline()
{
	std::string	line;

	std::getline(std::cin, line);
	return (line);
}

void		Contact::setFirstName(const std::string &firstName){
	this->firstName = firstName;}

void		Contact::setLastName(const std::string &lastName){
	this->lastName = lastName;}

void		Contact::setNickName(const std::string &nickName){
	this->nickName = nickName;}

void		Contact::setLogin(const std::string &login){
	this->login = login;}

void		Contact::setPostalAddress(const std::string &postalAddress){
	this->postalAddress = postalAddress;}

void		Contact::setEmailAddress(const std::string &emailAddress){
	this->emailAddress = emailAddress;}

void		Contact::setPhoneNumber(const std::string &phoneNumber){
	this->phoneNumber = phoneNumber;}

void		Contact::setBirthdayDate(const std::string &birthdayDate){
	this->birthdayDate = birthdayDate;}

void		Contact::setFavoriteMeal(const std::string &favoriteMeal){
	this->favoriteMeal = favoriteMeal;}

void		Contact::setUnderwearColor(const std::string &underwearColor){
	this->underwearColor = underwearColor;}

void		Contact::setDarkestSecret(const std::string &darkestSecret){
	this->darkestSecret = darkestSecret;}

std::string Contact::getNickName(){
	return (nickName);}

std::string Contact::getLastName(){
	return (lastName);}

std::string Contact::getFirstName(){
	return (firstName);}

void		print_list(std::string line)
{
	if (line.length() > 10)
	{
		line.resize(9);
		line.resize(10, '.');
	}
	else
		std::cout << std::setw(10) << std::setfill(' ');
	std::cout << line << "|";
}

std::string	Contact::leftOver(std::string line, int length)
{
	line.replace (0, this->length, this->length, ' ');
	line.resize ((this->length - 18) - length - 2);
	return (line);
}

void		Contact::print_contact_total()
{
	std::string line (this->length, '-');
	std::cout << std::endl << line << std::endl;
	std::cout << "|First name:       " << this->firstName << leftOver(line, this->firstName.length()) << "|" << std::endl;
	std::cout << "|Last name:        " << this->lastName << leftOver(line, this->lastName.length())<< "|" << std::endl;
	std::cout << "|Nickname:         " << this->nickName << leftOver(line, this->nickName.length())<< "|" << std::endl;
	std::cout << "|Login:            " << this->login << leftOver(line, this->login.length())<< "|" << std::endl;
	std::cout << "|Postal address:   " << this->postalAddress << leftOver(line, this->postalAddress.length())<< "|" << std::endl;
	std::cout << "|Email address:    " << this->emailAddress << leftOver(line, this->emailAddress.length())<< "|" << std::endl;
	std::cout << "|Phone number:     " << this->phoneNumber << leftOver(line, this->phoneNumber.length())<< "|" << std::endl;
	std::cout << "|Birthday date:    " << this->birthdayDate << leftOver(line, this->birthdayDate.length())<< "|" << std::endl;
	std::cout << "|Favorite meal:    " << this->favoriteMeal << leftOver(line, this->favoriteMeal.length())<< "|" << std::endl;
	std::cout << "|Underwear color:  " << this->underwearColor << leftOver(line, this->underwearColor.length())<< "|" << std::endl;
	std::cout << "|Darkest secret:   " << this->darkestSecret << leftOver(line, this->darkestSecret.length())<< "|" << std::endl;
	line.resize (this->length);
	line.replace (0, this->length, this->length, '-');
	std::cout << line << std::endl;
}

void		print_contact(Contact contacts[8], int index)
{
	std::string input;
	int			number;
	int			i;
	std::cout << "Please choose a number between 1 and " << index << ": ";
	while (1)
	{
		std::getline(std::cin, input);
		number = 0;
		i = 0;
		if (isdigit(input[i]) == true && input.length() == 1)
			if ((number = std::atoi(input.c_str())) && (index >= number > 0))
				break ;
		std::cout << "Please try again (1-" << index << "): ";
	}
	contacts[index - 1].print_contact_total();
}

int			search(Contact contacts[8], int index)
{
	std::cout << std::endl <<  "---------------------------------------------" << std::endl;
	std::cout << "|     index|First name| Last name|  nickname|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	for (int i = 0; i < index; i++)
	{
		std::cout << "|         " << i + 1 << "|";
		print_list(contacts[i].getFirstName());
		print_list(contacts[i].getLastName());
		print_list(contacts[i].getNickName());
		std::cout << std::endl;
	}
	for (int i = index; i < 8; i++)
		std::cout << "|         " << i + 1 << "|          |          |          |" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	if (index > 0)
		print_contact(contacts, index);
	return (1);
}

int			full_phonebook(void)
{
	std::cout << "ADD is not an option. It's seems that your phonebook is full!" << std::endl;
	return (1);
}

void		Contact::findLength()
{
	this->length = this->firstName.length();
	this->length = (this->lastName.length() > this->length ? this->lastName.length() : this->length);
	this->length = (this->nickName.length() > this->length ? this->nickName.length() : this->length);
	this->length = (this->login.length() > this->length ? this->login.length() : this->length);
	this->length = (this->postalAddress.length() > this->length ? this->postalAddress.length() : this->length);
	this->length = (this->emailAddress.length() > this->length ? this->emailAddress.length() : this->length);
	this->length = (this->phoneNumber.length() > this->length ? this->phoneNumber.length() : this->length);
	this->length = (this->birthdayDate.length() > this->length ? this->birthdayDate.length() : this->length);
	this->length = (this->favoriteMeal.length() > this->length ? this->favoriteMeal.length() : this->length);
	this->length = (this->underwearColor.length() > this->length ? this->underwearColor.length() : this->length);
	this->length = (this->darkestSecret.length() > this->length ? this->darkestSecret.length() : this->length);
	this->length += 20;
}

int			add_contact(Contact contacts[8], int *index)
{
	std::cout << "Enter your first name: ";
	contacts[*index].setFirstName(readline());
	std::cout << "Enter your last name: ";
	contacts[*index].setLastName(readline());
	std::cout << "Enter your nickname: ";
	contacts[*index].setNickName(readline());
	std::cout << "Enter your login: ";
	contacts[*index].setLogin(readline());
	std::cout << "Enter your postal address: ";
	contacts[*index].setPostalAddress(readline());
	std::cout << "Enter your email address: ";
	contacts[*index].setEmailAddress(readline());
	std::cout << "Enter your phone number: ";
	contacts[*index].setPhoneNumber(readline());
	std::cout << "Enter your Birthday date: ";
	contacts[*index].setBirthdayDate(readline());
	std::cout << "Enter your favorite meal: ";
	contacts[*index].setFavoriteMeal(readline());
	std::cout << "Enter your underwear color: ";
	contacts[*index].setUnderwearColor(readline());
	std::cout << "Enter your darkest secret: ";
	contacts[*index].setDarkestSecret(readline());
	contacts[*index].findLength();
	(*index)++;
	return (1);
}

int			start_menu(Contact contacts[8], int *index)
{
	std::string	option;

	std::cout << std::endl << "Choose one of the following options:" << std::endl;
	if (*index != 8)
		std::cout << "- ADD" << std::endl;
	std::cout << "- SEARCH" << std::endl;
	std::cout << "- EXIT" << std::endl << std::endl;
	std::cout << "Your option: ";
	std::getline(std::cin, option);
	if (!option.compare("ADD") && *index != 8)
		return (add_contact(contacts, index));
	if (!option.compare("ADD"))
		return (full_phonebook());
	if (!option.compare("SEARCH"))
		return (search(contacts, *index));
	if (!option.compare("EXIT"))
		return (0);
	std::cout << "Please type a valid command {ADD}, {SEARCH} of {EXIT}" << std::endl;
	return 1;
}

int			main(void)
{
	Contact	contacts[8];
	int		index = 0;
	std::cout << std::endl << "Welcome to your phonebook" << std::endl;
	while (1)
		 if (!start_menu(contacts, &index))
		 	return (0) ;
	return (0);
}
