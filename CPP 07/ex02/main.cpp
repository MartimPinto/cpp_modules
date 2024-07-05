/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 16:01:45 by mcarneir          #+#    #+#             */
/*   Updated: 2024/07/05 16:44:51 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include "Array.tpp"

int main()
{
	Array<int> iarr(3);
	Array<char> carr(3);

	for(int i = 0; i < iarr.size(); i++)
	{
		iarr[i] = i;
		std::cout << iarr[i];
	}
	std::cout << std::endl;
	try
	{
		std::cout<< iarr[6] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}