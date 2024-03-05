/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martimpinto <martimpinto@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 12:19:52 by martimpinto       #+#    #+#             */
/*   Updated: 2024/03/05 15:32:14 by martimpinto      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "AAnimal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main()
{
  const AAnimal* j = new Dog();
  const AAnimal* i = new Cat();
 
  delete j;
  delete i;
  const AAnimal *arr[6] = {new Dog(), new Dog(), new Dog(), new Cat(), new Cat(), new Cat()};
  for (int l = 0; l < 6; l++)
  {
    std::cout << "AAnimal: " << arr[l]->getType() << " deleted" << std::endl;
    delete arr[l];  
  }
  return 0;
}

