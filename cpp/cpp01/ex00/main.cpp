/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurodrig <aurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 22:30:37 by aurodrig          #+#    #+#             */
/*   Updated: 2025/04/08 22:30:45 by aurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump( std::string name );

Zombie* newZombie( std::string name );

int main() {
    randomChump("ZombieDUDU_stack");
	Zombie *b = newZombie("ZombieDUDU_heap");
	b->announce();
    delete b;
    return 0;
}