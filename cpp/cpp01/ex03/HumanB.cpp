/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurodrig <aurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 23:10:37 by aurodrig          #+#    #+#             */
/*   Updated: 2025/04/08 23:11:42 by aurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : myName(name) {
	this->myWeaponB = 0;
}

HumanB::~HumanB() {
	std::cout << this->myName << " died!\n";
}

void HumanB::attack() {
	if (!this->myWeaponB)
        std::cout << this->myName << " attacks with their bare hands\n";
    else
        std::cout << this->myName << " attacks with their " << this->myWeaponB->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weaponB) {
	this->myWeaponB = &weaponB;
}
