/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <vmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:38:35 by vmustone          #+#    #+#             */
/*   Updated: 2023/09/30 01:11:24 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "Contact.hpp"

using std::cout;
using std::cin;
using std::getline;

class PhoneBook{
private:
	Contact *contacts[8];
	int	index;
	
public:
	PhoneBook();
	void	addContact();
	void	displayContacts();
};
#endif