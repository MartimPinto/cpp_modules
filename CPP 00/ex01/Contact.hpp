/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:16:06 by mcarneir          #+#    #+#             */
/*   Updated: 2023/11/15 15:30:43 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define	CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact
{
private:
	std::string firstname;
	std::string	lastname;
	std::string	nickname;
	std::string	phonenumber;
	std::string	darkest_secret;
	
public:
	Contact();
	~Contact();
};


#endif
