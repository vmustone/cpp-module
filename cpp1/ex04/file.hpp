/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <vmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:40:43 by vmustone          #+#    #+#             */
/*   Updated: 2023/10/09 22:11:17 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_HPP
# define FILE_HPP
# include <string>
# include <iostream>
# include <fstream>

using std::string;
using std::cout;
using std::endl;
using std::cerr;
using std::ifstream;
using std::ofstream;
using std::getline;

class File {
	public:
		void	replaceInFile(string filename, string s1, string s2);
};
#endif