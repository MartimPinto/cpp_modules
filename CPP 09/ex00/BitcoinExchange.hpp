#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <map>
# include <sstream>
# include <string>
# include <cstdlib>

#define RESET	"\033[0m"
#define RED		"\033[1m\033[31m"
#define GREEN	"\033[1m\033[32m"
#define YELLOW	"\033[1m\033[33m"
#define BLUE	"\033[1m\033[34m"


class BitcoinExchange
{

	public:

		BitcoinExchange();
		BitcoinExchange(BitcoinExchange const &src);
		~BitcoinExchange();

		BitcoinExchange &operator=( BitcoinExchange const & rhs );
		void readCSV(const std::string& filename);
		const std::map<std::string, double> *getMap(void) const;


	private:
			std::map<std::string,double> _prices;
			std::string _file;


};



#endif /* ************************************************* BITCOINEXCHANGE_H */