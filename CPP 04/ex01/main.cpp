/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martimpinto <martimpinto@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 12:19:52 by martimpinto       #+#    #+#             */
/*   Updated: 2024/03/05 15:26:18 by martimpinto      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main()
{
  const Animal* j = new Dog();
  const Animal* i = new Cat();
 
  delete j;
  delete i;
  const Animal *arr[6] = {new Dog(), new Dog(), new Dog(), new Cat(), new Cat(), new Cat()};
  for (int l = 0; l < 6; l++)
  {
    std::cout << "Animal: " << arr[l]->getType() << " deleted" << std::endl;
    delete arr[l];  
  }
  return 0;
}

