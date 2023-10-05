/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <vmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 21:28:13 by vmustone          #+#    #+#             */
/*   Updated: 2023/10/05 13:07:27 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(string name, Weapon& type) : _name(name), _gun(type) {
}

string HumanA::getName() {
	return _name;
}

void	HumanA::setName(string input) {
	_name = input;
}

void HumanA::attack() {
	if (_gun.getType() != "")
		cout << _name << " attacks with their " << _gun.getType() << endl;
	else
		cout << _name << " doesn't have a weapon." << endl;
}