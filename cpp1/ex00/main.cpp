/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <vmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 00:04:57 by vmustone          #+#    #+#             */
/*   Updated: 2023/10/03 19:04:11 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	Zombie *zombie;
	string input;

	cout << "New zombie has born, you need to name it: ";
	getline(cin, input);
	zombie = newZombie(input);
	zombie->announce();
	delete zombie;

	cout << "Another zombie has born, first one died in a battle, again you need to name it: ";
	getline(cin, input);
	randomChump(input);
	return 0;
}