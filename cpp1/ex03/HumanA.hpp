/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <vmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 21:28:10 by vmustone          #+#    #+#             */
/*   Updated: 2023/10/05 12:58:56 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

class HumanA {
	private:
		Weapon& _gun;
		string _name;
	public:
		HumanA(string name, Weapon& type);
		string	getName();
		void	setName(string input);
		void	attack();
};

#endif