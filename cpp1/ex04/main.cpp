/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <vmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:35:41 by vmustone          #+#    #+#             */
/*   Updated: 2023/10/05 15:57:06 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.hpp"

int main(int argc, char **argv) {
	if (argc != 4) {	
		cout << "Wrong input" << endl;
	}
	File newFile = File(argv[1], argv[2], argv[3]);
	if ()
}