/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 12:00:52 by mcarneir          #+#    #+#             */
/*   Updated: 2024/07/17 12:42:53 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <stack>
# include <deque>
# include <list>
# include <algorithm>

#define RESET	"\033[0m"
#define RED		"\033[1m\033[31m"
#define GREEN	"\033[1m\033[32m"

template <class T, class Container = std::deque<T> >
class MutantStack: public std::stack<T, Container>
{
	
	private:

	public:

		MutantStack();
		MutantStack(MutantStack const & src);
		~MutantStack();

		MutantStack &operator=(MutantStack const &rhs);

		typedef typename Container::iterator iterator;
		iterator begin();
		iterator end();

};


#endif /* ***************************************************** MUTANTSTACK_H */