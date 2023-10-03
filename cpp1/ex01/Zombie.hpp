/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <vmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 19:11:08 by vmustone          #+#    #+#             */
/*   Updated: 2023/10/03 20:10:18 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
# include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

class Zombie {
	private:
		string _name;
	public:
		Zombie();
		string	getName();
		void	setName(string newName);
		void	announce();
};

Zombie* zombieHorde(int N, string name);
#endif