/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 18:08:59 by mcarneir          #+#    #+#             */
/*   Updated: 2024/07/03 14:52:37 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"

int main()
{
	Data *original = new Data;
	original->age = 26;
	original->name = "Martim";

	uintptr_t raw = Serializer::serialize(original);
	Data *deserialized = Serializer::deserialize(raw);

	
	std::cout << RED << "#----- ADDRESS TEST -----#" << RESET << std::endl;
	std::cout << std::endl;
	std::cout << "Original Data pointer: " << original << std::endl;
    std::cout << "Deserialized Data pointer: " << deserialized << std::endl;
	std::cout << std::endl;
	std::cout << RED << "#----- ATTRIBUTES TEST -----#" << RESET << std::endl;
	std::cout << std::endl;
	std::cout << "Original Name: " << original->name << std::endl;
	std::cout << "Deserialized Name: " << deserialized->name << std::endl;
	std::cout << std::endl;
	std::cout << "Original Age: " << original->age << std::endl;
	std::cout << "Deserialized Age: " << deserialized->age << std::endl;
	std::cout << std::endl;

	delete original;
}