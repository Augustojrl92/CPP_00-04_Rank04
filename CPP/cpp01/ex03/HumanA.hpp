/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurodrig <aurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 23:09:48 by aurodrig          #+#    #+#             */
/*   Updated: 2025/04/08 23:46:22 by aurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"


class HumanA {
	private:
		Weapon 		&myWeaponA;
		std::string myName;

	public:
	    HumanA(std::string name, Weapon &weapon);
    	~HumanA();
		void attack();
	
};

#endif