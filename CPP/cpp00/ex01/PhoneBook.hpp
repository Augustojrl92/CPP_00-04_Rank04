/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurodrig <aurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 18:29:24 by aurodrig          #+#    #+#             */
/*   Updated: 2025/03/23 19:11:12 by aurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"

std::string readLine(std::string prompt);

class PhoneBook {
    private:
        Contact PhoneList[8];
        void rotateContacts(void);
		void checkDetails(void);

    public:

        ~PhoneBook(void);
        PhoneBook(void);
		PhoneBook& operator=(const PhoneBook& other); 
        void AddContact(void);
        void ShowContacts(void);
};


#endif