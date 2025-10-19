/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurodrig <aurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 22:27:26 by aurodrig          #+#    #+#             */
/*   Updated: 2025/05/01 22:53:18 by aurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include "FragTrap.hpp"
#include "ScavTrap.hpp"


class DiamondTrap : public FragTrap , public ScavTrap {
    private:
        std::string name;
        using FragTrap::hitPoints;
        using FragTrap::attackDamage;
        using ScavTrap::energyPoints;
    public:
        DiamondTrap();
        DiamondTrap(std::string nameD);
        ~DiamondTrap();
        DiamondTrap(const DiamondTrap &other);
        DiamondTrap& operator=(const DiamondTrap& other);
         void attack(const std::string& target); 
        void whoAmI();
};

#endif