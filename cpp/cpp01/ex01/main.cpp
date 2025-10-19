/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurodrig <aurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 22:30:37 by aurodrig          #+#    #+#             */
/*   Updated: 2025/04/18 15:36:59 by aurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main() {
    Zombie *list_zombies;
    
    list_zombies = zombieHorde(5, "ZombieDUDU_stack");
	for (int i = 0; i < 5; i++)
        list_zombies[i].announce();
    delete[] list_zombies;
    return 0;
}