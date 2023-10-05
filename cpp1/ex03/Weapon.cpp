/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <vmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 21:28:21 by vmustone          #+#    #+#             */
/*   Updated: 2023/10/05 12:45:10 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(string weapon) {
	setType(weapon);
}

string	Weapon::getType() {
	return _type;
}

void	Weapon::setType(string name) {
	_type = name;
}