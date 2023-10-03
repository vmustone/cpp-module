/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <vmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 21:28:24 by vmustone          #+#    #+#             */
/*   Updated: 2023/10/03 21:59:34 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>
# include "HumanA.hpp"
# include "HumanB.hpp"

using std::string;
using std::cout;
using std::endl;

class Weapon {
	private:
		string _type;
	public:
		Weapon(string weapon);
		string getType();
		void	setType(string name);
};

#endif