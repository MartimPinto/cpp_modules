/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 16:12:42 by martimpinto       #+#    #+#             */
/*   Updated: 2024/06/25 18:31:44 by mcarneir         ###   ########.fr       */
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
	if (!isChar(str) && !isInt(str) && !isDouble(str) && !isFloat(str) && !isNanInf(str))
		return ERROR;
	return 0;
	
}

static void printChar(int type, char c, int i)
{
	if ((type != 5) && (i >= 0 && i<= UCHAR_MAX))
	{
		if (std::isprint(i))
			std::cout << "char: " << c << std::endl;
		else
			std::cout << "char: non displayable" << std::endl; 
	}
	else
		std::cout << "char: impossible" << std::endl;
}

static void printInt(int type, int i)
{
	if (type != 5 && (i >= INT_MIN || i <= INT_MAX))
		std::cout << "int: " << i << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
}

static void printFloat(int type, float f, const std::string &str)
{
	if (type != 5)
	{
		double check = std::atof(str.c_str());
		if ((type == 2) && (check <= INT_MIN || check >= INT_MAX))
			std::cout << "float: impossible" << std::endl;
		else
			std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
	}
	else if (type == 5)
	{
		if (str == "nan" || str == "nanf")
			std::cout << "float: nanf" << std::endl;
		else if (str == "+inf" || "+inff")
			std::cout << "float: +inff" << std::endl;
		else if (str == "-inf" || "-inff")
			std::cout << "float: -inff" << std::endl;
	}
}

static void printDouble(int type, double d, const std::string&str)
{
	if (type != 5)
	{
		double check = std::atof(str.c_str());
		if (type == 2 && (check <= INT_MIN || check >= INT_MAX))
			std::cout << "double: impossible" << std::endl;
		else
			std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
	}
	else if (type == 5)
	{
		if (str == "nan" || str == "nanf")
			std::cout << "double: nan" << std::endl;
		else if (str == "+inf" || "+inff")
			std::cout << "double: +inf" << std::endl;
		else if (str == "-inf" || "-inff")
			std::cout << "double: -inf" << std::endl;
	}
	
}


static void printValues(int type, char c, int i, double d, float f, const std::string &str)
{
	printChar(type, c, i);
	printInt(type, i);
	printFloat(type, f, str);
	printDouble(type, d, str);
	
}

void ScalarConverter::convert(const std::string &str)
{
	int type = checkLiteral(str);
	char	c = '\0';
	int		i = 0;
	double	d = 0.0;
	float	f = 0.0f;	

	switch (type)
	{
		case 1:
			c = static_cast<unsigned char>(str[0]);
			i = static_cast<int>(c);
			d = static_cast<double>(c);
			f = static_cast<float>(f);
			break;
		case 2:
			i = std::atoi(str.c_str());
			c = static_cast<unsigned char>(i);
			d = static_cast<double>(i);
			f = static_cast<float>(i);
		case 3:
			d = std::atof(str.c_str());
			c = static_cast<unsigned char>(d);
			i = static_cast<int>(d);
			f = static_cast<float>(d);
		case 4:
			f = std::atof(str.c_str());
			c = static_cast<unsigned char>(f);
			i = static_cast<int>(f);
			d = static_cast<double>(f);
		case 5:
			d = std::atof(str.c_str());
			c = static_cast<unsigned char>(d);
			i = static_cast<int>(d);
			f = static_cast<float>(d);
		case 6:
			std::cout << "Error" << std::endl;
			break; 
	}
	printValues(type, c, i, d, f, str);
}




/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */