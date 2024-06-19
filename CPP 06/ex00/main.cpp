/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martimpinto <martimpinto@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 16:39:44 by martimpinto       #+#    #+#             */
/*   Updated: 2024/06/18 16:41:50 by martimpinto      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		return(std::cout << "Only 1 argument is allowed" << std::endl, 1);
	}
	ScalarConverter::convert(argv[1]);
	return 0;
}