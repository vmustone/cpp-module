/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: villemustonen <villemustonen@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:57:28 by vmustone          #+#    #+#             */
/*   Updated: 2023/10/01 04:51:03 by villemuston      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook book;
	string	input;
	
	while (true)
	{
		cout << "Enter a command (ADD, SEARCH, EXIT)" << endl;
		getline(cin, input);

		if (cin.eof()){
			cout << "end of file\n";
			exit(EXIT_FAILURE);
		}

		if (input == "ADD")
			book.addContact();

		if (input == "SEARCH")
			book.displayContacts();
		
		else if (input == "EXIT")
			break;
	}
	return (0);
}