/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 16:06:43 by mcarneir          #+#    #+#             */
/*   Updated: 2024/07/18 16:36:15 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &src)
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

BitcoinExchange::~BitcoinExchange()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &rhs)
{
	if ( this != &rhs )
	{
		this->_prices = rhs._prices;
		this->_file = rhs._file;
	}
	return *this;
}



/*
** --------------------------------- METHODS ----------------------------------
*/

void BitcoinExchange::readCSV(const std::string &filename)
{
	std::ifstream	file(filename.c_str());
	std::string		line;
	if (!file.is_open())
	{
		std::cerr << "Error: could not open file" << std::endl;
		return ;
	}
	if (file.is_open())
	{
		while(std::getline(file, line))
		{
			size_t pos = line.find(',');
			std::string date = line.substr(0, pos);
			double value = std::strtod(line.substr(pos + 1).c_str(), NULL);
			_prices[date] = value;
		}
	}
	file.close();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const std::map<std::string, double> *BitcoinExchange::getMap(void) const
{
	return &_prices;
}
/* ************************************************************************** */