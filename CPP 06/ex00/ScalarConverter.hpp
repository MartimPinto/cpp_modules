/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 16:12:39 by martimpinto       #+#    #+#             */
/*   Updated: 2024/06/25 18:26:39 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <climits>
# include <fstream>
# include <sstream>
# include <cmath>
# include <iomanip>
# include <cstdlib>

#define CHAR	1;
#define INT		2;
#define DOUBLE	3;
#define	FLOAT	4;
#define	NAN_INF	5;
#define	ERROR	6;

class ScalarConverter
{

	public:
			static void convert(const std::string &str);

	private:
		ScalarConverter();
		ScalarConverter(ScalarConverter const &src);
		~ScalarConverter();
		


		ScalarConverter &operator=(ScalarConverter const &rhs);

};

#endif /* ************************************************* SCALARCONVERTER_H */