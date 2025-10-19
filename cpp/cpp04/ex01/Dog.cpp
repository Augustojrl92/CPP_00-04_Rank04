/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurodrig <aurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 21:53:42 by aurodrig          #+#    #+#             */
/*   Updated: 2025/06/11 14:23:15 by aurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define CYAN    "\033[36m"
#define MAGENTA "\033[35m"

Dog::Dog(){
       std::cout << GREEN
              << "Dog constructor called"
              << RESET << std::endl;
    brain = new Brain();
    setType("Dog");
}

Dog::~Dog(){
    delete brain;
     std::cout << RED
              << "Dog destructor called"
              << RESET << std::endl;
}

Dog::Dog(const Dog &other){
    brain = new Brain();
    *this = other;
    std::cout << CYAN << "[Copy] Dog" << RESET << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
    std::cout << YELLOW << "Dog Assignation operator called" << RESET << std::endl;
    if (this != &other)
    {
        type = other.getType();
        *brain = *(other.brain);
    }
    return (*this);
}

void Dog::makeSound() const{
    std::cout << MAGENTA
              << "Wau Wau!"
              << RESET << std::endl;
}

void Dog::setBrainIdea(std::string idea, int index){
    brain->setIdea(idea, index);
}

void Dog::showBrainIdea(int index){
    brain->showIdea(index);
}