/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartusc <fmartusc@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 15:39:29 by fmartusc          #+#    #+#             */
/*   Updated: 2025/07/21 15:39:29 by fmartusc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

int replaceWords(const std::string &inputFile, const std::string &oldWord, const std::string &newWord, const std::string &content)
{
	std::ofstream outfile((inputFile + ".replace").c_str());
	if (!outfile)
	{
		std::cerr << "Error: could not create output file." << std::endl;
		return 1;
	}
	size_t pos = 0;
	while (pos < content.size())
	{
		size_t found = content.find(oldWord, pos);
		if (found != std::string::npos)
		{
			outfile << content.substr(pos, found - pos); // first part till word
			outfile << newWord; // newword
			pos = found + oldWord.size(); // skips to after oldword
		}
		else
		{
			outfile << content.substr(pos); // No more occurrences: write the rest of the file
			break;
		}
	}
	return 0;
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Usage: replace <file> <old_word> <new_word>" << std::endl;
		return 1;
	}
	std::ifstream infile(argv[1]);
	if (!infile)
	{
		std::cerr << "Error: " << argv[1] << " — no such file or directory." << std::endl;
		return 1;
	}
	std::string content((std::istreambuf_iterator<char>(infile)), std::istreambuf_iterator<char>());
	infile.close();
	return replaceWords(argv[1], argv[2], argv[3], content);
}
