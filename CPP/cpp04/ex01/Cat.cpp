/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurodrig <aurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 21:56:20 by aurodrig          #+#    #+#             */
/*   Updated: 2025/06/11 14:59:58 by aurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define CYAN    "\033[36m"
#define MAGENTA "\033[35m"

Cat::Cat() {
    std::cout << GREEN
              << "Cat constructor called"
              << RESET << std::endl;
    brain = new Brain();
    setType("Cat");
}

Cat::~Cat(){
    delete brain;
    std::cout << RED
              << "Cat destructor called"
              << RESET << std::endl;
}

Cat::Cat(const Cat &other) 
{
    brain = new Brain();
    *this = other;
    std::cout << CYAN << "[Copy] Cat" << RESET << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
    std::cout << YELLOW << "Cat Assignation operator called" << RESET << std::endl;
    if (this != &other)
    {
        type = other.getType();
        *brain = *(other.brain);
    }
    return (*this);
}

void Cat::makeSound() const
{
       std::cout << MAGENTA
              << "Miau Miau!"
              << RESET << std::endl;
}

void Cat::setBrainIdea(std::string idea, int index){
    brain->setIdea(idea, index);
}

void Cat::showBrainIdea(int index){
    brain->showIdea(index);
}