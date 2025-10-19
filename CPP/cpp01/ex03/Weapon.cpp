/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurodrig <aurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 23:12:28 by aurodrig          #+#    #+#             */
/*   Updated: 2025/04/08 23:13:16 by aurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"



Weapon::Weapon(void) {
    std::cout << "Weapon created\n";
}

Weapon::Weapon(std::string novoType) {
    setType(novoType);
}

Weapon::~Weapon() {
    std::cout << "Destroyed weapon\n";
}

const std::string &Weapon::getType() {
    std::string &ref = this->myType;
    return (ref);
}

void Weapon::setType(std::string newType) {
    this->myType = newType;
}