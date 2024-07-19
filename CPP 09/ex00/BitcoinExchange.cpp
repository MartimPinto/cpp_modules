/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 16:06:43 by mcarneir          #+#    #+#             */
/*   Updated: 2024/07/19 18:36:10 by mcarneir         ###   ########.fr       */
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
			float value = std::strtod(line.substr(pos + 1).c_str(), NULL);
			_prices[date] = value;
		}
	}
	file.close();
}

void BitcoinExchange::printInfo(std::string date, float value)
{
	std::map<std::string, float>::iterator it = _prices.lower_bound(date);
	if (it->first == date)
	{
			std::cout << date << " => " << value << " = " << value * it->second << std::endl;
			return ;
	}
	else
	{
		--it;
		std::cout << date << " => " << value << " = " << value * it->second << std::endl;
		return ;
	}
}


bool checkDate(std::string date)
{
	if (date.length() != 10)
		return false;
	size_t i = date.find('-');
	if (i != 4)
		return false;
	int year =  atoi(date.substr(0, i).c_str());
	int month = atoi(date.substr(i + 1, 2).c_str());
	int day = atoi(date.substr(i + 4, 2).c_str());
	if (year < 2009 || year > 2022)
		return false;
	if (month < 1 || month > 12)
		return false;
	if (day < 1 || day > 31)
		return false;
	int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
		daysInMonth[1] = 29;
	if (day > daysInMonth[month - 1])
		return false;
	return true;
}

void BitcoinExchange::operation(const std::string &file)
{
	std::ifstream input(file.c_str());
	if(!input.is_open())
	{
		std::cerr << "Error: could not open file" << std::endl;
		return ;
	}
	std::string line;
	if (std::getline(input, line))
    {
        if (line != "date | value")
        {
            std::cerr << "Error: invalid header => " << line << std::endl;
            return;
        }
	}
	while(std::getline(input, line))
	{
		size_t pos = line.find('|');
		if (pos == std::string::npos)
		{
			std::cerr << "Error: bad input => " << line.substr(0, pos - 1) << std::endl;
			continue; ;
		}
		std::string date = line.substr(0, pos - 1);
		if(!checkDate(date))
		{
			std::cerr << "Error: bad input => " << date << std::endl;
			continue ;
		}
		std::string value_str = line.substr(pos + 2);
		std::stringstream tmp(value_str);
		float value;
		if(!(tmp >> value))
		{
			std::cerr << "Error: bad input => " << line.substr(pos + 1) << std::endl;
			continue ;
		}
		else if (value < 0)
		{
			std::cerr << "Error: not a positive number" << std::endl;
			continue ;
		}
		else if (value > 1000)
		{
			std::cerr << "Error: too large a number" << std::endl;
			continue;
		}
		else
			printInfo(date, value);
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const std::map<std::string, float> *BitcoinExchange::getMap(void) const
{
	return &_prices;
}
/* ************************************************************************** */