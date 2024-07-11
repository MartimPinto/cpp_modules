/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 15:46:57 by martimpinto       #+#    #+#             */
/*   Updated: 2024/07/11 17:05:24 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <algorithm>
# include <cstdlib>
# include <vector>
# include <iterator>

#define RESET	"\033[0m"
#define RED		"\033[1m\033[31m"
#define GREEN	"\033[1m\033[32m"


class Span
{
	

	public:
		Span(unsigned int n);
		Span(Span const &src);
		~Span();

		Span &operator=(Span const &rhs);

		void	addNumber(int i);
		void	addNumbers(std::vector<int>::const_iterator it, std::vector<int>::const_iterator ite);
		int		shortestSpan();
		int		longestSpan();
		static int		fillRand();

		const std::vector<int> *getVector(void) const;

		class ContainerFilled: public std::exception
		{
			public:
					virtual const char *what() const throw();
		};

	private:
			Span();
			unsigned int _max;
			std::vector<int> _cont;

};
std::ostream&	operator<<( std::ostream &o, Span const &i);

#endif /* ************************************************************ SPAN_H */