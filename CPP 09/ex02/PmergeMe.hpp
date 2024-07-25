/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martimpinto <martimpinto@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 14:57:37 by mcarneir          #+#    #+#             */
/*   Updated: 2024/07/25 14:16:51 by martimpinto      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <string>
# include <vector>
# include <deque>
# include <cstdlib>
# include <ctime>

class PmergeMe
{

	public:

		PmergeMe();
		PmergeMe(PmergeMe const &src);
		~PmergeMe();
		

		PmergeMe &operator=(PmergeMe const &rhs);

		std::vector<int> *getVector(void);
		std::deque<int> *getDeque(void);
		void sortVector(std::vector<int> &vec);
        std::vector<int> insertVector(std::vector<int> &left, std::vector<int> &right, std::vector<int> &vec);
        void sortDeque(std::deque<int> &deq);
        std::deque<int> insertDeque(std::deque<int> &left, std::deque<int> &right, std::deque<int> &deq);
        double calculateTime(clock_t start, clock_t end);
        void operate();

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