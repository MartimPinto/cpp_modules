/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martimpinto <martimpinto@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 15:58:25 by mcarneir          #+#    #+#             */
/*   Updated: 2024/02/08 17:41:49 by martimpinto      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <fstream>
#include <iostream>

#define RESET	"\033[0m"
#define RED		"\033[1m\033[31m"
#define GREEN	"\033[1m\033[32m"
#define YELLOW	"\033[1m\033[33m"
#define BLUE	"\033[1m\033[34m"


void	checkParam(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << BLUE << "USAGE: ./replace  filename  string1  string2  " << RESET << std::endl;
		exit (1);
	}
	std::string find = argv[2];
	if (find.empty())
	{
		std::cout << BLUE << "USAGE: string to find cannot be empty" << RESET << std::endl;
		exit (1);
	}
}

std::string	replaceInLine(std::string toFind, std::string toReplace, std::string line)
{
	size_t pos = 0;
	while (1)
	{
		pos = line.find(toFind, pos);
		if (pos == std::string::npos)
			break ;
		line.erase(pos, toFind.length());
		line.insert(pos, toReplace);
		pos += toReplace.length();
	}
	return (line);
}

void	replacement(std::string filename, std::string s1, std::string s2)
{
	std::ifstream infile(filename);
	if(!infile.is_open())
	{
		std::cerr << RED << "Error: could not open file " << filename << RESET << std::endl;
		return ;
	}
	std::ofstream outfile(filename + ".replace");
	if(!outfile.is_open())
	{
		std::cerr << RED << "Error: could not write file " << filename << ".replace" << RESET << std::endl;
		return ;
	}
	bool replaceDone = false;
	if (infile.is_open() && outfile.is_open())
	{
		if (s1 == s2)
		{
			outfile << infile.rdbuf();
			std::cout << YELLOW << "Both strings are the same"<< RESET << std::endl;
		}
		std::string line;
		while (std::getline(infile, line))
		{
			std::string originalLine = line;
			line = replaceInLine(s1, s2, line);
			if (originalLine != line)
				replaceDone = true;
			outfile << line << std::endl;
		}
		infile.close();
		outfile.close();
		if (replaceDone) 
       		std::cout << GREEN << "Replacement was successful!" << RESET << std::endl;
		else
        	std::cout << YELLOW << "Replacement not possible" << RESET << std::endl;
	}
}

int main(int argc, char **argv)
{
	std::string	filename;
	std::string	s1;
	std::string	s2;
	
	checkParam(argc, argv);
	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	replacement(filename, s1, s2);
	return (0);
}
