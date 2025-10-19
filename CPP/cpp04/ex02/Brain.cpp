/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurodrig <aurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 14:11:36 by aurodrig          #+#    #+#             */
/*   Updated: 2025/06/11 14:31:21 by aurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define CYAN    "\033[36m"
#define MAGENTA "\033[35m"

Brain::Brain()
{
    std::cout << GREEN << "Brain constructor called" << RESET << std::endl;
}

Brain::~Brain()
{   
    std::cout << RED << "Brain destructor called" << RESET << std::endl;
}

Brain::Brain(const Brain &other)
{
    *this = other;
  std::cout << CYAN << "[Copy] Brain" << RESET << std::endl;
}

Brain& Brain::operator=(const Brain& other)
{
    std::cout << YELLOW << "Brain Assignation operator called" << RESET << std::endl;
    if (this != &other)
    {
        for (int i = 0 ; i < 100; i++){
            ideas[i] = other.ideas[i];
        }
    }
    return (*this);
}

void    Brain::setIdea(std::string idea, int index){
    ideas[index] = idea;
}

void	Brain::showIdea(int index){
    std::cout << BLUE << ideas[index] << RESET << std::endl;
}