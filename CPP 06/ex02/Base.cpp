/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 15:27:03 by mcarneir          #+#    #+#             */
/*   Updated: 2024/07/03 14:39:51 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Base::~Base()
{
}

/*
** --------------------------------- METHODS ----------------------------------
*/

Base *generate(void)
{
	std::srand(time(0));
	int rng = std::rand() % 3;
	switch (rng)
	{
		case 0:
			return new A();
			break;
		case 1:
			return new B();
			break;
		case 2:
			return new C();
			break;
		default:
			std::cout << "Error: Could not generate instance\n" << std::endl;
			return NULL;
			break;
	}
}

void identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "unknown type" << std::endl;
}

void identify(Base &p)
{
	try 
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		return;
	} 
	catch (std::exception& exception) {}
	try 
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		return;
	} 
	catch (std::exception& exception) {}
	try 
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		return;
	} 
	catch (std::exception& exception) 
	{
		std::cout << "unknown type" << std::endl;
		return;
	}
}

/* ************************************************************************** */