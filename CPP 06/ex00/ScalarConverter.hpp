/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martimpinto <martimpinto@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 16:12:39 by martimpinto       #+#    #+#             */
/*   Updated: 2024/06/18 16:39:13 by martimpinto      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <limits>
# include <fstream>

class ScalarConverter
{

	public:
			static void convert(const std::string &str);


	private:
		ScalarConverter();
		ScalarConverter( ScalarConverter const & src );
		~ScalarConverter();

		ScalarConverter &operator=(ScalarConverter const &rhs);

};

std::ostream &			operator<<( std::ostream & o, ScalarConverter const & i );

#endif /* ************************************************* SCALARCONVERTER_H */