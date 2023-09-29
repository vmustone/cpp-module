/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MegaPhone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <vmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 13:00:52 by vmustone          #+#    #+#             */
/*   Updated: 2023/09/21 16:15:08 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	for (int i = 1; argv[i] != nullptr; i++){
		std::string output;
		for (int j = 0; argv[i][j]; j++){
			if (std::islower(argv[i][j]))
				output += std::toupper(argv[i][j]);
			else
				output += argv[i][j];
		}
		if (argv[i] != nullptr)
			std::cout << ' ';
		std::cout << output;
	}
	std::cout << std::endl;
	return (0);
}