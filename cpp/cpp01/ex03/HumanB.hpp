/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurodrig <aurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 23:11:46 by aurodrig          #+#    #+#             */
/*   Updated: 2025/04/08 23:46:15 by aurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"
#include  <iostream>


class HumanB {
	private:
		Weapon 		*myWeaponB;
		std::string myName;

	public:
	    HumanB(std::string name);
    	~HumanB();
		void attack();
		void setWeapon(Weapon &weapon);
};

#endif