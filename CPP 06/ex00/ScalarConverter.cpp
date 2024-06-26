/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 16:12:42 by martimpinto       #+#    #+#             */
/*   Updated: 2024/06/26 16:32:11 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter &src)
{
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScalarConverter::~ScalarConverter()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &rhs)
{
	if ( this == &rhs )
		return *this;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

static bool isChar(const std::string &str)
{
	if (str.length() == 1 && isdigit(str[0]) == false)
		return true;
	return false;
}

static bool isInt(const std::string &str)
{
	if (str.find_first_not_of("+-0123456789") == std::string::npos)
		return true;
	return false;
}

static bool isNanInf(const std::string &str)
{
	if (str == "-inff" || str == "+inff" || str == "nanf" || str == "-inf" || str == "+inf" || str == "nan")
		return true;
	return false;
}

static bool isDouble(const std::string &str)
{
	if (str.find_first_not_of("+-0123456789.") == std::string::npos)
	{
		if (str.find_first_of(".") != str.find_last_of(".")
			|| isdigit(str[str.find_first_of(".") + 1] == false)
			|| str.find_first_of(".") == 0)
				return false;
		else
			return true;
	}
	return false;
}

static bool isFloat(const std::string &str)
{
	if (str.find_first_not_of("+-0123456789.f") == std::string::npos)
	{
		if (str.find_first_of(".") != str.find_last_of(".")
			|| str.find_first_of("f") != str.find_last_of("f")
			|| str.find_first_of("f") - str.find_last_of(".") == 1
			|| isdigit(str[str.find_first_of(".") + 1] == false)
			|| str.find_first_of(".") == 0 || str.find_first_of("f") == 0)
				return false;
		else
			return true;
	}
	return false;
	
}

static int checkLiteral(const std::string &str)
{
	if (isChar(str))
		return CHAR;
	if (isInt(str))
		return INT;
	if (isDouble(str))
		return DOUBLE;
	if (isFloat(str))
		return FLOAT;
	if (isNanInf(str))
		return NAN_INF;
	return ERROR;
	
}

static void printChar(int type, char c, int i)
{
	if ((type != NAN_INF) && (i >= 0 && i <= UCHAR_MAX))
	{
		if (std::isprint(i))
			std::cout << "char: " << c << std::endl;
		else
			std::cout << "char: non displayable" << std::endl; 
	}
	else
		std::cout << "char: impossible" << std::endl;
}

static void printInt(int type, int i, const std::string &str)
{
	if (type != NAN_INF)
	{
		double check = strtod(str.c_str(), NULL);
		if (check < INT_MIN || check > INT_MAX)
		{
				std::cout << "int: impossible " << std::endl;
		}
		else
			std::cout << "int: " << i << std::endl;
	}
	else
		std::cout << "int: impossible" << std::endl;
}

static void printFloat(int type, float f, const std::string &str)
{
	if (type != NAN_INF)
		std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
	else if (type == NAN_INF)
	{
		if (str == "nan" || str == "nanf")
			std::cout << "float: nanf" << std::endl;
		else if (str == "+inf" || str == "+inff")
			std::cout << "float: +inff" << std::endl;
		else if (str == "-inf" || str == "-inff")
			std::cout << "float: -inff" << std::endl;
	}
}

static void printDouble(int type, double d, const std::string &str)
{
	if (type != NAN_INF)
	{
		std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
	}
	else if (type == NAN_INF)
	{
		if (str == "nan" || str == "nanf")
			std::cout << "double: nan" << std::endl;
		else if (str == "+inf" || str == "+inff")
			std::cout << "double: +inf" << std::endl;
		else if (str == "-inf" || str == "-inff")
			std::cout << "double: -inf" << std::endl;
	}
	
}


static void printValues(int type, char c, int i, double d, float f, const std::string &str)
{
	printChar(type, c, i);
	printInt(type, i, str);
	printFloat(type, f, str);
	printDouble(type, d, str);
}

int checkOverflow(const std::string &str, int type)
{
	double check1 = std::strtod(str.c_str(), NULL);
	long double check2 = std::strtold(str.c_str(), NULL);
	long double check3 = std::strtold(str.c_str(), NULL);
	switch (type)
	{
		case CHAR:
			return CHAR;
		case INT:
			if (check1 >= INT_MIN && check1 <= INT_MAX)
				return INT;
			else
				return ERROR;
		case FLOAT:
			if (check2 >= -std::numeric_limits<float>::max() 
				&& check2 <= std::numeric_limits<float>::max())
				return FLOAT;
			else
				return ERROR;
		case DOUBLE:
			if (check3 >= -std::numeric_limits<double>::max() 
				&& check3 <= std::numeric_limits<double>::max())
				return DOUBLE;
			else
				return ERROR;
		case NAN_INF:
			return NAN_INF;
		case ERROR:
			return ERROR;		
	}
	return type;
	
}

void ScalarConverter::convert(const std::string &str)
{
	int type = checkLiteral(str);
	type = checkOverflow(str, type);
	char	c = '\0';
	int		i = 0;
	double	d = 0.0;
	float	f = 0.0f;

	switch (type)
	{
		case CHAR:
			c = static_cast<unsigned char>(str[0]);
			i = static_cast<int>(c);
			d = static_cast<double>(c);
			f = static_cast<float>(c);
			break;
		case INT:
			i = std::atoi(str.c_str());
			c = static_cast<unsigned char>(i);
			d = static_cast<double>(i);
			f = static_cast<float>(i);
			break;
		case DOUBLE:
			d = std::strtod(str.c_str(), NULL);
			c = static_cast<unsigned char>(d);
			i = static_cast<int>(d);
			f = static_cast<float>(d);
			break;
		case FLOAT:
			f = std::atof(str.c_str());
			c = static_cast<unsigned char>(f);
			i = static_cast<int>(f);
			d = static_cast<double>(f);
			break;
		case NAN_INF:
			d = std::atof(str.c_str());
			c = static_cast<unsigned char>(d);
			i = static_cast<int>(d);
			f = static_cast<float>(d);
			break;
		case ERROR:
			std::cout << RED << "Error: " << RESET << "unable to convert" << std::endl;
			break; 
	}
	if (type != ERROR)
		printValues(type, c, i, d, f, str);
}




/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */