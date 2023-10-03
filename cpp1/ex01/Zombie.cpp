/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <vmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 19:13:01 by vmustone          #+#    #+#             */
/*   Updated: 2023/10/03 19:59:24 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {
	_name = "";
}

string	Zombie::getName() {
	return _name;
}

void	Zombie::setName(string newName) {
	_name = newName;
}

void	Zombie::announce() {
	cout << _name << ": BraiiiiiiinnnzzzZ...\n";
}