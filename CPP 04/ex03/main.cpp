/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 19:20:22 by martimpinto       #+#    #+#             */
/*   Updated: 2024/04/23 16:30:38 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"


//Main given by the subject
int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    delete bob;
    delete me;
    delete src;
    return 0;
}


/*
//My own tests
int main()
{
  std::cout << "======LEARN, CREATE, EQUIP, UNEQUIP====" << std::endl;
  IMateriaSource	*newSrc = new MateriaSource();
  newSrc->learnMateria(new Ice());
  newSrc->learnMateria(new Cure());
  
  ICharacter	*mark = new Character("Mark");
  std::cout << mark->getName() << std::endl;
  
  AMateria	*buffer;
  for (int i = 0; i < 5; i++)
  {
    if (i > 0)
      std::cout << std::endl;
    std::cout << "Materia #" << i + 1 << ": ";
    if (i % 2 == 0)
      buffer = newSrc->createMateria("cure");
    else
      buffer = newSrc->createMateria("ice");
    mark->equip(buffer);
  }
  
  ICharacter *sophie = new Character("Sophie");
  for (int i = 0; i < 5; i++)
    mark->use(i, *sophie);

  for (int i = 0; i < 6; i++)
    mark->unequip(i);
      
  delete mark;
  delete sophie;
  delete newSrc; 


  std::cout << std::endl;
  std::cout << "======DEEP COPY TEST====" << std::endl;

	Ice	*basic = new Ice();
	Ice *temp = new Ice(*basic);
	
	std::cout << std::endl << "temp : " << temp << " | type: " << temp->getType() << std::endl;
	delete	temp;
	
	std::cout << std::endl << "basic: " << basic << " | type: " << basic->getType() << std::endl;
	delete	basic;
	
	std::cout << std::endl;
}
*/



	