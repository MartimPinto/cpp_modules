/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 18:08:59 by mcarneir          #+#    #+#             */
/*   Updated: 2024/07/01 13:23:22 by mcarneir         ###   ########.fr       */
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

	std::cout << "Original Data pointer: " << original << std::endl;
    std::cout << "Deserialized Data pointer: " << deserialized << std::endl;
}