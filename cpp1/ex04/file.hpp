/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <vmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:40:43 by vmustone          #+#    #+#             */
/*   Updated: 2023/10/05 15:54:49 by vmustone         ###   ########.fr       */
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

class File {
	private:
		string file_read;
		string file_write;
		string s1;
		string s2;
	public:
		File(string filename, string s1, string s2);
};
#endif