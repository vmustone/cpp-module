/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: villemustonen <villemustonen@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:32:46 by vmustone          #+#    #+#             */
/*   Updated: 2023/10/01 05:13:00 by villemuston      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "PhoneBook.hpp"

using namespace std;

class Contact{
private:
string FirstName;
string LastName;
string NickName;
string PhoneNumber;
string DarkestSecret;

public:
	Contact();
	string	GetFirstName(void)const;
	string	GetLastName(void)const;
	string	GetNickName(void)const;
	string	GetPhoneNumber(void)const;
	string	GetDarkestSecret(void)const;

	void	SetFirstName(std::string input);
	void	SetLastName(std::string input);
	void	SetNickName(std::string input);
	void	SetPhoneNumber(std::string	input);
	void	SetDarkestSecret(std::string input);
};
#endif