/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 12:19:52 by martimpinto       #+#    #+#             */
/*   Updated: 2024/04/23 12:28:03 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main()
{
  const Animal *arr[6] = {new Dog(), new Dog(), new Dog(), new Cat(), new Cat(), new Cat()};
  std::cout << std::endl;
  for (int l = 0; l < 6; l++)
  {
    std::cout << "[Animal: " << arr[l]->getType() << " deleted]" << std::endl;
    delete arr[l];  
  }
  
  std::cout << std::endl;
  std::cout << "======CAT DEEP COPY=====" << std::endl;

  Cat *original = new Cat();
  Cat *copy = new Cat(*original);

  std::cout << std::endl << "Original's Brain Adress: " << original->getBrain() << std::endl;
	delete original;
	
	std::cout << std::endl << "Copy's Brain Adress: " << copy->getBrain() << std::endl;
	delete copy;

  std::cout << std::endl;
  std::cout << "====== DOG DEEP COPY =====" << std::endl;

  Dog *og = new Dog();
  Dog *replicate = new Dog(*og);

  std::cout << std::endl << "OG's Brain Adress: " << og->getBrain() << std::endl;
	delete og;
	
	std::cout << std::endl << "Replicate's Brain Adress: " << replicate->getBrain() << std::endl;
	delete replicate;

}

