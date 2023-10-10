/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <vmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:42:51 by vmustone          #+#    #+#             */
/*   Updated: 2023/10/09 22:16:15 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.hpp"

void File::replaceInFile(string filename, string s1, string s2) {
    if (s1 == "") {
		cout << "Nothing to replace" << endl;
		exit(1);
	}

	ifstream inputFile(filename);

    if (!inputFile) {
        cerr << "Error: Unable to open input file." << endl;
        return;
    }

    string outputFilename = filename + ".replace";
    ofstream outputFile(outputFilename);

    if (!outputFile) {
        cerr << "Error: Unable to create output file." << std::endl;
        return;
    }

    string line;

    while (getline(inputFile, line)) {
        size_t startPos = 0;
        size_t foundPos;

        while ((foundPos = line.find(s1, startPos)) != string::npos) {
            outputFile << line.substr(startPos, foundPos - startPos);
            outputFile << s2;
            startPos = foundPos + s1.length();
        }
		
        outputFile << line.substr(startPos) << std::endl;
    }

    inputFile.close();
    outputFile.close();
}
