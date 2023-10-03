/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <vmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 00:21:27 by vmustone          #+#    #+#             */
/*   Updated: 2023/10/03 19:02:23 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
# include <iostream>

using std::string;
using std::cout;
using std::cin;

class Zombie {
	private:
		string _name;
	public:
		Zombie();
		void	announce(void);
		string	getName();
		void	setName(string newName);
};

Zombie *newZombie(string name);
void	randomChump(std::string name);
#endif