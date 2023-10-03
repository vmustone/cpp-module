/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <vmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 20:05:50 by vmustone          #+#    #+#             */
/*   Updated: 2023/10/03 21:20:59 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

int main() {
	string brain = "HI THIS IS BRAIN";
	string* brainPTR = &brain;
	string& brainREF = brain;

	cout << &brain << endl;
	cout << brainPTR << endl;
	cout << &brainREF << endl;

	cout << brain << endl;
	cout << *brainPTR << endl;
	cout << brainREF << endl;

	return 0;
}