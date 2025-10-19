/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurodrig <aurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 22:16:14 by aurodrig          #+#    #+#             */
/*   Updated: 2025/05/13 21:14:05 by aurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#include "ScavTrap.hpp"

int main(void) {
    
        ScavTrap A("curandera");
        ScavTrap B(A);
        ScavTrap C("mago");
        ScavTrap D;

        B.guardGate();

        C.attack(B.getName());
        B.takeDamage(C.getDamageAttack());

        B.attack(C.getName());
        C.takeDamage(B.getDamageAttack());

        C.beRepaired(2);
    

    std::cout << "\033[33m--- End of battle ---\033[0m" << std::endl;
    return 0;
}
