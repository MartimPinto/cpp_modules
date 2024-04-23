/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 12:19:52 by martimpinto       #+#    #+#             */
/*   Updated: 2024/04/23 12:53:17 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "AAnimal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main()
{
  
  std::cout << std::endl;
  std::cout << "======LEAKS TEST=====" << std::endl;
  const AAnimal* j = new Dog();
  const AAnimal* i = new Cat();
 
  delete j;
  delete i;
  std::cout << std::endl;
  const AAnimal *arr[6] = {new Dog(), new Dog(), new Dog(), new Cat(), new Cat(), new Cat()};
  for (int l = 0; l < 6; l++)
  {
    std::cout << "[AAnimal: " << arr[l]->getType() << " deleted]" << std::endl;
    delete arr[l];  
  }

  std::cout << std::endl;
  std::cout << "======INITIALIZING AN INSTANCE OF AANIMAL====" << std::endl;
  //AAnimal test;

  return 0;
}

