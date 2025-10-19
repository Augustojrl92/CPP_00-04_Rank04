/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurodrig <aurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 22:21:17 by aurodrig          #+#    #+#             */
/*   Updated: 2025/05/14 19:50:52 by aurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define CYAN    "\033[36m"
#define RESET   "\033[0m"

// Constructor por defecto
ScavTrap::ScavTrap() {
    attackDamage = 20;
    energyPoints = 50;
    hitPoints = 100;
    std::cout << YELLOW << "ScavTrap default constructor called" << RESET << std::endl;
}

// Constructor con nombre
ScavTrap::ScavTrap(std::string nameScrav) : ClapTrap(nameScrav) {
    attackDamage = 20;
    energyPoints = 50;
    hitPoints = 100;
    std::cout << YELLOW << "----------------------------" << std::endl;
    std::cout << "ScavTrap Constructor called" << std::endl;
    std::cout << "Attack damage: " << attackDamage << std::endl;
    std::cout << "Starting hit points: " << hitPoints << std::endl;
    std::cout << "Starting energy points: " << energyPoints << std::endl;
    std::cout << "----------------------------" << RESET << std::endl;
}

// Destructor
ScavTrap::~ScavTrap(){
    std::cout << RED << "ScavTrap Destructor called for " << name << RESET << std::endl;
}

// Constructor de copia
ScavTrap::ScavTrap(const ScavTrap &other) {
    std::cout << YELLOW << "ScavTrap Copy Constructor called" << RESET << std::endl;
    *this = other;
}

// Operador de asignación
ScavTrap& ScavTrap::operator=(const ScavTrap& other){
    if (this != &other)
    {
        name = other.name;
        hitPoints = other.hitPoints;
        energyPoints = other.energyPoints;
        attackDamage = other.attackDamage;
    }
    return (*this);
}

// Ataque (sobrescrito)
void ScavTrap::attack(const std::string& target){
    if (hitPoints > 0 && energyPoints > 0)
        energyPoints--;
    std::cout << BLUE << "ScavTrap " << name << " attacks " << target
              << ", causing " << attackDamage << " points of damage!" << RESET << std::endl;
    std::cout << BLUE << "Now " << name << " has " << energyPoints << " energy points." << RESET << std::endl;
}

// Modo guardia
void ScavTrap::guardGate(){
    std::cout << CYAN << "ScavTrap " << name << " has entered Gate Keeper mode!" << RESET << std::endl;
}