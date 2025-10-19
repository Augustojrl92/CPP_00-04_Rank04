/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurodrig <aurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 12:13:33 by aurodrig          #+#    #+#             */
/*   Updated: 2025/03/23 17:59:58 by aurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include "iostream"
#include "iomanip"
#include "string"

class Contact{
private:
	int         index;
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;
public:

	Contact(void);
	~Contact(void);
	Contact& operator=(const Contact & other);
	int getIndex(void);
	std::string getFirstName();
	std::string getLastName();
	std::string getNickname();
	void setIndex(int i);
	void CreateContact (int id, std::string first, std::string last, std::string nick, std::string number, std::string secret);
	void DisplayContact(void);
};

#endif
