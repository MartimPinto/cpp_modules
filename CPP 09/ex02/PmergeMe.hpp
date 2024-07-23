/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 14:57:37 by mcarneir          #+#    #+#             */
/*   Updated: 2024/07/23 17:41:46 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <string>
# include <vector>
# include <deque>
# include <cstdlib>

class PmergeMe
{

	public:

		PmergeMe();
		PmergeMe(PmergeMe const &src);
		~PmergeMe();
		

		PmergeMe &operator=(PmergeMe const &rhs);

		std::vector<int> *getVector(void);
		std::deque<int> *getDeque(void);
		std::vector<int> *sortVector(std::vector<int> &vec);

	private:
			std::vector<int> _vec;
			std::deque<int> _deq;
			

};

template<typename Container>
void printElements(const Container& con, const std::string& str) 
{
    std::cout << str << ": ";
    typename Container::const_iterator it;
    int count = 0;
    for(it = con.begin(); it != con.end() && count < 4; ++it, ++count) 
    {
        std::cout << *it << " ";
    }
    if (count == 4 && con.size() > 4)
    {
        std::cout << "[...]";
    }
    std::cout << std::endl;
}

/*std::ostream &operator<<(std::ostream &o, PmergeMe const &i);*/

#endif /* ******************************************************** PMERGEME_H */