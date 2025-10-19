/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurodrig <aurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 22:28:02 by aurodrig          #+#    #+#             */
/*   Updated: 2025/05/14 00:42:36 by aurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define CYAN    "\033[36m"
#define MAGENTA "\033[35m"
#define RESET   "\033[0m"

// Constructor por defecto
DiamondTrap::DiamondTrap()
  : ClapTrap("Default_clap_name")  
  , FragTrap()  
  , ScavTrap()                
  , name("Default")
{
    // Ajustar stats combinados:
    hitPoints    = FragTrap::hitPoints;
    energyPoints = ScavTrap::energyPoints;
    attackDamage = FragTrap::attackDamage;
    std::cout << YELLOW
              << "DiamondTrap default constructor called for " << name
              << RESET << std::endl;
}

// Constructor con nombre
DiamondTrap::DiamondTrap(std::string n)
  : ClapTrap(n + "_clap_name")
  , FragTrap()
  , ScavTrap()
  , name(n)
{
    hitPoints    = FragTrap::hitPoints;
    energyPoints = ScavTrap::energyPoints;
    attackDamage = FragTrap::attackDamage;
    std::cout << YELLOW
              << "DiamondTrap Constructor called for " << name
              << RESET << std::endl;
}




// Constructor de copia
DiamondTrap::DiamondTrap(const DiamondTrap &other) {
    std::cout << YELLOW << "DiamondTrap Copy Constructor called" << RESET << std::endl;
    *this = other;
}

// Operador de asignación
DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other) {
    if (this != &other)
    {
        name = other.name;
        hitPoints = other.hitPoints;
        energyPoints = other.energyPoints;
        attackDamage = other.attackDamage;
    }
    return (*this);
}

// Destructor
DiamondTrap::~DiamondTrap() {
    std::cout << RED << "DiamondTrap Destructor called for " << name << RESET << std::endl;
}

// Método whoAmI
void DiamondTrap::whoAmI() {
    std::cout << CYAN << "DiamondTrap name: " << name << std::endl
              << "ClapTrap name: " << ClapTrap::getName() << RESET << std::endl;
}

//(Opcional) Redefinir ataque con color
void DiamondTrap::attack(const std::string& target){
    std::cout << MAGENTA;
    ScavTrap::attack(target);
    std::cout << RESET;
}
