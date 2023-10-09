/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: villemustonen <villemustonen@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:35:41 by vmustone          #+#    #+#             */
/*   Updated: 2023/10/09 05:13:04 by villemuston      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.hpp"

int main(int argc, char **argv) {
    if (argc != 4) {
        cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << endl;
        return 1;
    }
	File	newFile;
    newFile.replaceInFile(argv[1], argv[2], argv[3]);
    return 0;
}