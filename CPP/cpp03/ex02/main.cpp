/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurodrig <aurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 22:16:14 by aurodrig          #+#    #+#             */
/*   Updated: 2025/05/13 21:14:48 by aurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#include "FragTrap.hpp"

int main(void) {
	FragTrap A("curandera");
	FragTrap B(A);
	FragTrap C("mago");

	B.highFivesGuys();

	C.attack(B.getName());
	B.takeDamage(C.getDamageAttack());

	B.attack(C.getName());
	C.takeDamage(B.getDamageAttack());

	std::cout << "\033[33m--- End of battle ---\033[0m" << std::endl;
    return 0;
}