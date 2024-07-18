/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 12:24:05 by mcarneir          #+#    #+#             */
/*   Updated: 2024/07/18 16:34:41 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.cpp"

/*void checkParams(int argc, char **argv)
{
	std::string arg = argv[1];
	if (argc != 2 && arg.empty())
	{
		std::cerr << "Error: could not open file" << std::endl;
		exit(1);
	}

}
*/

int main(int argc, char **argv)
{
	/*checkParams(argc, argv);
	std::ifstream file(argv[1]);
	if (!file.is_open())
	{
		std::cerr << "Error: could not open file" << std::endl;
		exit(1);
	}
	file.close();
	*/

	(void)argc;
	(void)argv;

	BitcoinExchange btc;
	btc.readCSV("data.csv");
	std::map<std::string, double>::const_iterator it = btc.getMap()->begin();
	std::map<std::string, double>::const_iterator ite = btc.getMap()->end();
	while (it != ite)
	{
		 std::cout << "Key: " << it->first
             << ", Value: " << it->second << std::endl;
        ++it;
	}


	
}