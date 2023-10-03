/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <vmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 19:15:52 by vmustone          #+#    #+#             */
/*   Updated: 2023/10/03 20:10:25 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, string name) {
	Zombie *newZombie = new Zombie[N];
	
	for (int i = 0; i < N; i++) {
		newZombie[i].setName(name);
	}
	return newZombie;
}