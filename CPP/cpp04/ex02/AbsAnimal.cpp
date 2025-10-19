/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AbsAnimal.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurodrig <aurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 21:37:30 by aurodrig          #+#    #+#             */
/*   Updated: 2025/06/11 15:28:33 by aurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AbsAnimal.hpp"

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define CYAN    "\033[36m"
#define MAGENTA "\033[35m"

AbsAnimal::AbsAnimal(){
    std::cout << GREEN
              << "Animal constructor called"
              << RESET << std::endl;
}

AbsAnimal::~AbsAnimal(){
        std::cout << RED
              << "Animal destructor called"
              << RESET << std::endl;
}

AbsAnimal::AbsAnimal(const AbsAnimal &other){
    *this = other;
}

AbsAnimal& AbsAnimal::operator=(const AbsAnimal& other){
    if (this != &other){
        type = other.getType();
    }
    return (*this);
}

void AbsAnimal::setType(std::string InputType){
    this->type =  InputType;
}

std::string AbsAnimal::getType(void) const{
    return (this->type);
}