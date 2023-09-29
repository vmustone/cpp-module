/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <vmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:45:24 by vmustone          #+#    #+#             */
/*   Updated: 2023/09/30 01:39:28 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	for(int i = 0; i < 8; i++){
		contacts[i] = '\0';
	}
	index = 0;
}

void PhoneBook::addContact()
{
	int i;
	if (i < 8)
	{
		Contact *newContact = new Contact;
		
		std::string input;

		std::cout << "Enter first name: ";
		std::getline(std::cin, input);
		newContact->SetFirstName(input);

		std::cout << "Enter last name: ";
		std::getline(std::cin, input);
		newContact->SetLastName(input);

		std::cout << "Enter nickname: ";
		std::getline(std::cin, input);
		newContact->SetNickName(input);

		std::cout << "Enter phone number: ";
		std::getline(std::cin, input);
		newContact->SetPhoneNumber(input);

		std::cout << "Enter darkest secret: ";
		std::getline(std::cin, input);
		newContact->SetDarkestSecret(input);
		contacts[i] = newContact;
	}
}

void PhoneBook::displayContacts() {
    std::cout << std::setw(10) << "Index" << "|";
    std::cout << std::setw(10) << "First Name" << "|";
    std::cout << std::setw(10) << "Last Name" << "|";
    std::cout << std::setw(10) << "Nickname" << "|" << std::endl;
    std::cout << "---------------------------------------------" << std::endl;

    for (int i = 0; i < 8; i++) {
        if (contacts[i]) {
            std::cout << std::setw(10) << i << "|";
            std::cout << std::setw(10) << contacts[i]->GetFirstName() << "|";
            std::cout << std::setw(10) << contacts[i]->GetLastName() << "|";
            std::cout << std::setw(10) << contacts[i]->GetNickName() << "|" << std::endl;
        }
    }
}