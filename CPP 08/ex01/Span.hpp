/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martimpinto <martimpinto@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 15:46:57 by martimpinto       #+#    #+#             */
/*   Updated: 2024/07/15 15:00:53 by martimpinto      ###   ########.fr       */
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
		int		shortestSpan();
		int		longestSpan();
		void	addRange();
		const std::vector<int> *getVector(void) const;

		class ContainerFilled: public std::exception
		{
			public:
					virtual const char *what() const throw();
		};

		class SpanException: public std::exception
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
int		generateRand();

#endif /* ************************************************************ SPAN_H */