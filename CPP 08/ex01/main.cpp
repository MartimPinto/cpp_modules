/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 14:58:48 by mcarneir          #+#    #+#             */
/*   Updated: 2024/07/17 15:45:48 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	srand(time(0));
	Span	a(3);
	Span 	b(10000);

	try
	{
		a.addNumber(1);
		a.addNumber(5);
		a.addNumber(42);

		std::cout << GREEN << "Elements in container 'a' (limit 3): " << RESET << a << std::endl;
		std::cout << GREEN << "Longest Span in 'a': " << RESET << a.longestSpan() << std::endl;
		std::cout << GREEN << "Shortest Span in 'a': " << RESET << a.shortestSpan() << std::endl;

		a.addNumber(52);
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET <<'\n';
	}
	try
	{
		b.addRange();
		std::cout << GREEN << "Elements in container 'b': " << RESET << b << std::endl;
		std::cout << GREEN << "Longest Span in 'b': " << RESET << b.longestSpan() << std::endl;
		std::cout << GREEN << "Shortest Span in 'b': " << RESET << b.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}