/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 14:58:48 by mcarneir          #+#    #+#             */
/*   Updated: 2024/07/11 17:09:09 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	srand(time(0));
	Span	a(3);
	Span 	b(1000);

	a.addNumber(7);
	a.addNumber(24);
	a.addNumber(42);

	std::cout << a << std::endl;

	/*std::vector<int>::const_iterator it = b.getVector()->begin();
	std::vector<int>::const_iterator ite = b.getVector()->end();*/

	std::vector<int> v(1000);
	std::generate(v.begin(), v.end(), std::rand);

	b.addNumbers(v.begin(), v.end());

	std::cout << b << std::endl;
}