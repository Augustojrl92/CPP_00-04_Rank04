/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurodrig <aurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 22:16:14 by aurodrig          #+#    #+#             */
/*   Updated: 2025/05/13 23:48:57 by aurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void) {
	DiamondTrap B("REY BLANCO");
	DiamondTrap C("REY NEGRO");

	B.whoAmI();

	C.attack(B.getName());
	B.takeDamage(C.getDamageAttack());

	B.attack(C.getName());
	C.takeDamage(B.getDamageAttack());
	B.guardGate();

	std::cout << "\033[33m--- End of battle Chess ---\033[0m" << std::endl;
    return 0;
}