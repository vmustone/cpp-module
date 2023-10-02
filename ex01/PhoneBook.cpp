/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: villemustonen <villemustonen@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:45:24 by vmustone          #+#    #+#             */
/*   Updated: 2023/10/01 05:47:18 by villemuston      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
	index = 0;
}

void PhoneBook::addContact(){	
	string input;

	cout << "Enter first name: ";
	getline(cin, input);
	while (input.empty()){
		cout << "try again ";
		getline(cin, input);
	}
	contacts[index % 8].SetFirstName(input);
	
	cout << "Enter last name: ";
	getline(cin, input);
	while (input.empty()){
		cout << "try again ";
		getline(cin, input);
	}
	contacts[index % 8].SetLastName(input);

	cout << "Enter nickname: ";
	getline(cin, input);
	while (input.empty()){
		cout << "try again ";
		getline(cin, input);
	}
	contacts[index % 8].SetNickName(input);

	cout << "Enter phone number: ";
	getline(cin, input);
	while (input.empty()){
		cout << "try again ";
		getline(cin, input);
	}
	contacts[index % 8].SetPhoneNumber(input);

	cout << "Enter darkest secret: ";
	getline(cin, input);
	while (input.empty()){
		cout << "try again ";
		getline(cin, input);
	}
	contacts[index % 8].SetDarkestSecret(input);

	index++;
}

void	PhoneBook::displayContacts(){
	string input;
	int id;
	
	cout << "|     Index|First name| Last name| Nickname" << endl;
	for (int i = 0; i < 8; i++){
		cout << "|" << setw(10) << i;
		cout << "|" << setw(10) << contacts[i].GetFirstName();
		cout << "|" << setw(10) << contacts[i].GetLastName();
		cout << "|" << setw(10) << contacts[i].GetNickName();
		cout << endl;
	}

	cout << "Enter index" << endl;
	getline(cin, input);
	id = stoi(input);
	if (id < 0 || id > 7)
		cout << "invalid index" << endl;
	else {
		cout << "First name: " << contacts[id].GetFirstName() << endl;
		cout << "Last name: " << contacts[id].GetLastName() << endl;
		cout << "Nickname: " << contacts[id].GetNickName() << endl;
		cout << "Phonenumber: " << contacts[id].GetPhoneNumber() << endl;
		cout << "Darkest secret: " << contacts[id].GetDarkestSecret() << endl;
	}
}