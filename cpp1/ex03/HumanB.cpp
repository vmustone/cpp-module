/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <vmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 21:28:07 by vmustone          #+#    #+#             */
/*   Updated: 2023/10/05 13:04:53 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(string name) : _name(name){
	_gun = NULL;
}

void HumanB::attack() {
	if (_gun != NULL && _gun->getType() != "") 
		cout << _name << " attacks with their " << _gun->getType() << endl;
	else
		cout << _name << " attacks with their bare hands" << endl;
}

void	HumanB::setWeapon(Weapon& type) {
	_gun = &type;
}