/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: villemustonen <villemustonen@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:38:35 by vmustone          #+#    #+#             */
/*   Updated: 2023/10/01 05:26:24 by villemuston      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <stdio.h>
# include "Contact.hpp"

using namespace std;

class PhoneBook{
private:
	Contact contacts[8];
	int	index;
	
public:
	PhoneBook();
	void	addContact();
	void	displayContacts();
};
#endif