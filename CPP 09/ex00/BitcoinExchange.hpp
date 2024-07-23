/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 11:42:09 by mcarneir          #+#    #+#             */
/*   Updated: 2024/07/23 11:42:10 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <map>
# include <sstream>
# include <string>
# include <cstdlib>

#define RESET	"\033[0m"
#define RED		"\033[1m\033[31m"
#define GREEN	"\033[1m\033[32m"
#define YELLOW	"\033[1m\033[33m"
#define BLUE	"\033[1m\033[34m"


class BitcoinExchange
{

	public:

		BitcoinExchange();
		BitcoinExchange(BitcoinExchange const &src);
		~BitcoinExchange();

		BitcoinExchange &operator=( BitcoinExchange const & rhs );
		void readCSV(const std::string& filename);
		void operation(const std::string& file);
		void printInfo(std::string date, float value);
		const std::map<std::string, float> *getMap(void) const;


	private:
			std::map<std::string,float> _prices;
			std::string _file;


};



#endif /* ************************************************* BITCOINEXCHANGE_H */