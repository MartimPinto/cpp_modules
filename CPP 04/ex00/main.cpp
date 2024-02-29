/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martimpinto <martimpinto@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 12:19:52 by martimpinto       #+#    #+#             */
/*   Updated: 2024/02/29 13:20:44 by martimpinto      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main()
{
  std::cout << std::endl;
  std::cout << "----------------CorrectTests-----------------" << std::endl;
  std::cout << std::endl;
  
  const Animal* meta = new Animal();
  const Animal* j = new Dog();
  const Animal* i = new Cat();
  std::cout << j->getType() << " " << std::endl;
  std::cout << i->getType() << " " << std::endl;
  i->makeSound();
  j->makeSound();
  meta->makeSound();

  delete i;
  delete j;
  delete meta;

  std::cout << std::endl;
  std::cout << "----------------WrongAnimal-----------------" << std::endl;
  std::cout << std::endl;

  const WrongAnimal *base = new WrongAnimal();
  const WrongAnimal *d = new WrongCat();
  std::cout << d->getType() << " " << std::endl;
  d->makeSound();
  base->makeSound();
  
  delete d;
  delete base;

  return 0;
}

