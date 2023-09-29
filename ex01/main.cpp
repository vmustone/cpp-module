/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <vmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:57:28 by vmustone          #+#    #+#             */
/*   Updated: 2023/09/30 00:54:06 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook book;
	string	input;
	int i;
	
	while (true)
	{
		cout << "Enter a command (ADD, SEARCH, EXIT)" << std::endl;
		getline(cin, input);

		if (cin.eof())
		{
			cout << "end of file\n";
			exit(EXIT_FAILURE);
		}

		if (input == "ADD")
		{
			book.addContact();
		}

		if (input == "SEARCH")
		{
		
        }
		
		else if (input == "EXIT")
			break;
	}
	return (0);
}