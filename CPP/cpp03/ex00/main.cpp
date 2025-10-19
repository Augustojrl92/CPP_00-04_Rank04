/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurodrig <aurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 22:16:14 by aurodrig          #+#    #+#             */
/*   Updated: 2025/05/13 21:13:29 by aurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap A = ClapTrap("Mago");
	ClapTrap B = ClapTrap("Guerrero");

	std::cout << A.getName() << std::endl;
	std::cout << B.getName() << std::endl;

	A.attack(B.getName());
	B.takeDamage(A.getDamageAttack());
	B.beRepaired(2);
	
	B.attack(A.getName());
	A.beRepaired(2);

	std::cout << "\033[33m--- End of battle ---\033[0m" << std::endl;
    return 0;
}