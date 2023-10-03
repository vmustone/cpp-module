/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <vmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 19:07:39 by vmustone          #+#    #+#             */
/*   Updated: 2023/10/03 20:02:28 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
	size_t num_zombies;
	string name_zombies;
	Zombie *newZ;

	cout << "Enter amount of zombies: ";
	cin >> num_zombies;
	cout << "Enter name for zombies: ";
	cin >> name_zombies;
	newZ = zombieHorde(num_zombies, name_zombies);
	for (int i = 0; i < num_zombies; i++) {
		newZ[i].announce();
	}
	delete[] newZ;
	return 0;
}