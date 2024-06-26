/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 16:39:44 by martimpinto       #+#    #+#             */
/*   Updated: 2024/06/26 14:22:24 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		return(std::cout << RED << "Only 1 argument is allowed" << RESET << std::endl, 1);
	}
	ScalarConverter::convert(argv[1]);
	return 0;
}