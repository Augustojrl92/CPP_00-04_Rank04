/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurodrig <aurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 18:32:08 by aurodrig          #+#    #+#             */
/*   Updated: 2025/03/23 19:08:16 by aurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook()
{
}


PhoneBook::~PhoneBook()
{
}


PhoneBook &PhoneBook::operator=(const PhoneBook &other)
{
	if (this != &other)
	{

		for (int i = 0; i < 8; i++)
			this->PhoneList[i] = other.PhoneList[i];
	}
	return *this;
}


std::string DeleteSpaces(const std::string& str)
{
    std::string result;
    result.reserve(str.size());

    for (size_t i = 0; i < str.size(); ++i)
    {
        if (!std::isspace(str[i]))
            result += str[i];
    }
    return result;
}


std::string readLine(std::string prompt)
{
	std::string line;
	std::cout << prompt;
	std::getline(std::cin, line);
	line = DeleteSpaces(line);
	while (line.empty())
	{
		std::cout << prompt;
        std::getline(std::cin, line);
        line = DeleteSpaces(line);
	}
	return (line);
}

void PhoneBook::rotateContacts()
{
    for (int i = 7; i > 0; i--) {
        this->PhoneList[i] = this->PhoneList[i - 1];
        this->PhoneList[i].setIndex(i + 1);
    }
}

void PhoneBook::AddContact()
{
	Contact new_contact;
	
	std::string first = readLine("Enter first name: ");
	std::string last = readLine("Enter last name: ");
	std::string nick = readLine("Enter nickname: ");
	std::string number = readLine("Enter phone number: ");
	std::string secret = readLine("Enter darkest secret: ");

    this->rotateContacts();
    this->PhoneList[0].CreateContact(1, first, last, nick, number, secret);
}

void	PhoneBook::checkDetails()
{
	int i;
	std::string details;

	while (1)
	{
		details = readLine("Choose a index to see details or press 'Q' to quit: ");
		if (details.length() == 1 && details[0] >= '1' && details[0] <= '8')
		{
			i = details[0] - '0';
			if (this->PhoneList[i - 1].getIndex() != 0)
				this->PhoneList[i - 1].DisplayContact();
			else
				std::cout << "Contact doesn't exist with that index." << std::endl;
		}
		else if (details == "Q")
			break;
		else
			std::cout << "Invalid index" << std::endl;
	}
	return ;
}

void PhoneBook::ShowContacts()
{
	int i = 0;
	while (i < 8)
	{
	    std::cout << std::setw(10) << this->PhoneList[i].getIndex() << "|";
	    if (this->PhoneList[i].getFirstName().size() > 9)
	        std::cout << this->PhoneList[i].getFirstName().substr(0,9) << "."<< "|";
	    else
	        std::cout << std::setw(10) << this->PhoneList[i].getFirstName() << "|";
	    if (this->PhoneList[i].getLastName().size() > 9)
	        std::cout << this->PhoneList[i].getLastName().substr(0,9) << "."<< "|";
	    else
	        std::cout << std::setw(10) << this->PhoneList[i].getLastName() << "|";
	    if (this->PhoneList[i].getNickname().size() > 9)
	        std::cout << this->PhoneList[i].getNickname().substr(0,9) << "."<< std::endl;
	    else
		{
	        std::cout << std::setw(10) << this->PhoneList[i].getNickname() << std::endl;
		}
		i++;
	}
	this->checkDetails();
}
