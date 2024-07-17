/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 11:36:57 by mcarneir          #+#    #+#             */
/*   Updated: 2024/07/17 15:10:01 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include "MutantStack.tpp"

int main()
{
	std::cout << RED << "#----- MUTANT STACK TEST -----#" << RESET << std::endl;
	
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << GREEN << "Newest element: " << RESET << mstack.top() << std::endl;
	mstack.pop();
	std::cout << GREEN << "Size: " << RESET << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << GREEN << "Stack Elements: " << RESET;
	while (it != ite)
	{
		std::cout << *it << " ";
		++it;
	}
	std::cout << std::endl;
	std::stack<int> s(mstack);
	std::cout << GREEN << "Newest element of s(copy constructor): " << RESET << s.top() << std::endl;
	std::cout << std::endl;
	
	std::cout << RED << "#----- LIST TEST -----#" << RESET << std::endl;
	std::list<int> lst;
	lst.push_back(5);
	lst.push_back(17);
	std::cout << GREEN << "Newest element: " << RESET << lst.back() << std::endl;
	lst.pop_back();
	std::cout << GREEN << "Size: " << RESET << lst.size() << std::endl;
	lst.push_back(3);
	lst.push_back(5);
	lst.push_back(737);
	lst.push_back(0);
	std::list<int>::iterator itl = lst.begin();
	std::list<int>::iterator itel = lst.end();
	++itl;
	--itl;
	std::cout << GREEN << "Stack Elements: " << RESET;
	while (itl != itel)
	{
		std::cout << *itl << " ";
		++itl;
	}
	std::cout << std::endl;
	std::list<int> l(lst);
	std::cout << GREEN << "Newest element of l(copy constructor): " << RESET << l.back() << std::endl;
	std::cout << std::endl;

	std::cout << RED << "#----- OTHER TEST -----#" << RESET << std::endl;

	MutantStack<char> foo;
	MutantStack<char> bar;
	for (char c = 97; c != 123; c++)
		foo.push(c);
	std::cout << GREEN << "Foo Elements: " << RESET;
	MutantStack<char>::iterator itc = foo.begin();
	MutantStack<char>::iterator itec = foo.end();
	while (itc != itec)
	{
		std::cout << *itc << " ";
		++itc;
	}
	bar = foo;
	MutantStack<char>::iterator itb = bar.begin();
	MutantStack<char>::iterator iteb = bar.end();
	std::cout << std::endl;
	std::cout << GREEN << "Bar Elements(copy assignment operator): " << RESET;
	while (itb != iteb)
	{
		std::cout << *itb << " ";
		++itb;
	}
	std::cout << std::endl;

	return 0;
}