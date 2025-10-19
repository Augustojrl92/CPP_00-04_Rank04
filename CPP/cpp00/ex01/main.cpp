/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurodrig <aurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 19:21:01 by aurodrig          #+#    #+#             */
/*   Updated: 2025/03/23 19:31:46 by aurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "PhoneBook.hpp"

int main(void)
{
    PhoneBook myBook;
    std::string input;

    while (true)
    {
        input = readLine("Enter a command: ");
        if (input.compare("ADD") == 0)
            myBook.AddContact();
        else if (input.compare("SEARCH") == 0)
            myBook.ShowContacts();
        else if (input.compare("EXIT") == 0)
            break;
    }
    return 0;
}