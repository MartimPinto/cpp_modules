/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 12:24:05 by mcarneir          #+#    #+#             */
/*   Updated: 2024/07/19 17:33:09 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.cpp"

void checkParams(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Error: could not open file" << std::endl;
		exit(1);
	}
	std::string arg = argv[1];
    if (arg.empty())
    {
        std::cerr << "Error: file empty" << std::endl;
        exit(1);
    }

}


int main(int argc, char **argv)
{
	BitcoinExchange btc;
	checkParams(argc, argv);
	std::ifstream file(argv[1]);
	if (!file.is_open())
	{
		std::cerr << "Error: could not open file" << std::endl;
		exit(1);
	}
	file.close();
	btc.readCSV("data.csv");
	btc.operation(argv[1]);
	return 0;
}