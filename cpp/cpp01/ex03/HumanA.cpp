/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurodrig <aurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 22:53:48 by aurodrig          #+#    #+#             */
/*   Updated: 2025/04/08 23:09:39 by aurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): myWeaponA(weapon), myName(name){
}

HumanA::~HumanA() {
    std::cout << this->myName << " died!\n";
}

void HumanA::attack() {
    std::cout << this->myName << " attacks with their " << this->myWeaponA.getType() << std::endl;
}