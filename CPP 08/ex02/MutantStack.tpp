/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 12:01:23 by mcarneir          #+#    #+#             */
/*   Updated: 2024/07/17 15:05:30 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"


template <class T, class Container>
MutantStack<T, Container>::MutantStack(){}

template <class T, class Container>
MutantStack<T, Container>::MutantStack(MutantStack const &src): std::stack<T, Container>(src)
{
	*this = src;
}

template <class T, class Container>
MutantStack<T, Container>::~MutantStack(){}

template <class T, class Container>
MutantStack<T, Container> &MutantStack<T, Container>::operator=(const MutantStack &src)
{
	if ( this != &src )
	{
		std::stack<T, Container>::operator=(src);
	}
	return (*this);
}

template <class T, class Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::begin()
{
	return (this->c.begin());
}

template <class T, class Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::end()
{
	return (this->c.end());
}