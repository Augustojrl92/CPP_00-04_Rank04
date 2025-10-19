/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurodrig <aurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 21:37:30 by aurodrig          #+#    #+#             */
/*   Updated: 2025/06/11 15:27:26 by aurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define CYAN    "\033[36m"
#define MAGENTA "\033[35m"

Animal::Animal()
{
    std::cout << GREEN
              << "Animal constructor called"
              << RESET << std::endl;
}

Animal::~Animal()
{
    std::cout << RED
              << "Animal destructor called"
              << RESET << std::endl;
}

Animal::Animal(const Animal &other)
{
    *this = other;
}

Animal& Animal::operator=(const Animal& other){
    if (this != &other)
    {
        type = other.getType();

    }
    return (*this);
}

void Animal::setType(std::string InputType)
{
    this->type =  InputType;
}

std::string Animal::getType(void) const
{
    return (this->type);
}

void Animal::makeSound() const
{
    std::cout << MAGENTA
              << "I am an animal"
              << RESET << std::endl;
}