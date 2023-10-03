/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <vmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 21:28:13 by vmustone          #+#    #+#             */
/*   Updated: 2023/10/03 22:01:00 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

string HumanA::getName() {
	return _name;
}

void	HumanA::setName(string input) {
	_name = input;
}

void HumanA::attack() {
	cout << _name << "attacks with their" << _gun << endl;
}