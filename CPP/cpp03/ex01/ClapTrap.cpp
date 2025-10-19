/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurodrig <aurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 22:16:00 by aurodrig          #+#    #+#             */
/*   Updated: 2025/05/14 19:39:58 by aurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#define RED     "\033[31m"   // Daño
#define GREEN   "\033[32m"   // Reparación
#define YELLOW  "\033[33m"   // Constructores
#define BLUE    "\033[34m"   // Ataque
#define RESET   "\033[0m"

// Constructor por defecto
ClapTrap::ClapTrap() : hitPoints(10), energyPoints(10), attackDamage(0){
    std::cout << YELLOW << "ClapTrap default constructor called" << RESET << std::endl;
}

// Constructor con nombre
ClapTrap::ClapTrap(std::string nameInput) : name(nameInput), hitPoints(10),
energyPoints(10), attackDamage(0) {
    std::cout << YELLOW << "----------------------------" << std::endl;
    std::cout << "ClapTrap Constructor called for " << name << std::endl;
    std::cout << "Attack damage: " << attackDamage << std::endl;
    std::cout << "Starting hit points: " << hitPoints << std::endl;
    std::cout << "Starting energy points: " << energyPoints << std::endl;
    std::cout << "----------------------------" << RESET << std::endl;
}

// Destructor
ClapTrap::~ClapTrap(){
    std::cout << YELLOW << "ClapTrap Destructor called for " << name << RESET << std::endl;
}

// Constructor de copia
ClapTrap::ClapTrap(const ClapTrap &other){
    *this = other;
}

// Operador de asignación
ClapTrap& ClapTrap::operator=(const ClapTrap& other){
    if (this != &other)
    {
        name = other.name;
        hitPoints = other.hitPoints;
        energyPoints = other.energyPoints;
        attackDamage = other.attackDamage;
    }
    return (*this);
}

// Método de ataque
void ClapTrap::attack(const std::string& target){
    if (hitPoints > 0 && energyPoints > 0)
        energyPoints--;
    std::cout << BLUE << "ClapTrap " << name << " attacks " << target
              << ", causing " << attackDamage << " points of damage!" << RESET << std::endl;
    std::cout << BLUE << "Now " << name << " has " << energyPoints << " energy points." << RESET << std::endl;
}

// Recibir daño
void ClapTrap::takeDamage(unsigned int amount){
    if (energyPoints && hitPoints){
        hitPoints -= amount;
    }
    std::cout << RED << "ClapTrap " << name << " takes " << amount << " damage"
              << ", now has " << hitPoints << " hit points." << RESET << std::endl;
    std::cout << RED << "Now " << name << " has " << energyPoints << " energy points." << RESET << std::endl;
}

// Repararse
void ClapTrap::beRepaired(unsigned int amount){
    if (energyPoints && hitPoints){
        hitPoints += amount;
        energyPoints--;
    }
    std::cout << GREEN << "ClapTrap " << name << " repairs " << amount << " hit points,"
              << " now has " << hitPoints << " hit points." << RESET << std::endl;
    std::cout << GREEN << "Now " << name << " has " << energyPoints << " energy points." << RESET << std::endl;
}

// Getter del nombre
std::string ClapTrap::getName(){
    return (this->name);
}

// Getter del daño
int	ClapTrap::getDamageAttack(void) const {
	return this->attackDamage;
}