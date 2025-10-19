/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurodrig <aurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 22:23:27 by aurodrig          #+#    #+#             */
/*   Updated: 2025/05/01 22:26:00 by aurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define RESET   "\033[0m"

// Constructor por defecto
FragTrap::FragTrap() {
    std::cout << YELLOW << "FragTrap default constructor called" << RESET << std::endl;
    attackDamage = 30;
    energyPoints = 100;
    hitPoints = 100;
}

// Constructor con nombre
FragTrap::FragTrap(std::string nameFrag) : ClapTrap(nameFrag) {
    attackDamage = 30;
    energyPoints = 100;
    hitPoints = 100;
    std::cout << YELLOW << "----------------------------" << std::endl;
    std::cout << "FragTrap Constructor called for " << name << std::endl;
    std::cout << "Attack damage: " << attackDamage << std::endl;
    std::cout << "Starting hit points: " << hitPoints << std::endl;
    std::cout << "Starting energy points: " << energyPoints << std::endl;
    std::cout << "----------------------------" << RESET << std::endl;
}

// Destructor
FragTrap::~FragTrap() {
    std::cout << RED << "FragTrap Destructor called for " << name << RESET << std::endl;
}

// Constructor de copia
FragTrap::FragTrap(const FragTrap &other) {
    std::cout << YELLOW << "FragTrap Copy Constructor called" << RESET << std::endl;
    *this = other;
}

// Operador de asignación
FragTrap& FragTrap::operator=(const FragTrap& other) {
    if (this != &other)
    {
        name = other.name;
        hitPoints = other.hitPoints;
        energyPoints = other.energyPoints;
        attackDamage = other.attackDamage;
    }
    return (*this);
}

// Método exclusivo
void FragTrap::highFivesGuys() {
    std::cout << MAGENTA << "FragTrap " << name << " gives a high five ✋ :)" << RESET << std::endl;
}