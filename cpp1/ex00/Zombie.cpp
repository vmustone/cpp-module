/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <vmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 00:24:21 by vmustone          #+#    #+#             */
/*   Updated: 2023/10/03 19:02:16 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {
	_name = "";
}

void	Zombie::announce() {
	cout << _name << ": BraiiiiiiinnnzzzZ...\n";
}

string	Zombie::getName() {
	return _name;
}

void	Zombie::setName(string newName) {
	_name = newName;
}