/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurodrig <aurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 15:42:02 by aurodrig          #+#    #+#             */
/*   Updated: 2025/03/23 19:52:32 by aurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Contact.hpp"

Contact::Contact() {
    this->index = 0;
}

Contact::~Contact(){
}

Contact& Contact::operator=(const Contact& other)
{
   if (this != &other)
   {
      firstName = other.firstName;
      lastName = other.lastName;
      nickname = other.nickname;
	  phoneNumber = other.phoneNumber;
      darkestSecret = other.darkestSecret;
      
   }
   return *this;
}

void Contact::setIndex(int i) {
    this->index = i;
}

int Contact::getIndex() {
    return (this->index);
}

std::string Contact::getFirstName() {
    return (this->firstName);
}

std::string Contact::getLastName() {
	return (this->lastName);
}

std::string Contact::getNickname() {
	return (this->nickname);
}

void Contact::CreateContact (int id, std::string first, std::string last, std::string nick, std::string number, std::string secret) {
    this->index = id;
    this->firstName = first;
    this->lastName = last;
    this->nickname = nick;
    this->phoneNumber = number;
    this->darkestSecret = secret;
}

void Contact::DisplayContact() {
    std::cout << std::setw(10) << firstName << " | "
              << std::setw(10) << lastName << " | "
              << std::setw(10) << nickname << " | "
              << std::setw(10) << phoneNumber << " | "
              << darkestSecret << std::endl;
}