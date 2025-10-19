/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurodrig <aurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 23:13:21 by aurodrig          #+#    #+#             */
/*   Updated: 2025/04/08 23:46:10 by aurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include  "iostream"

class Weapon {

	private:
		std::string myType;
	public:
		Weapon();
   		Weapon(std::string type);
    	~Weapon(void);

		const std::string &getType();
		void setType(std::string);
};

#endif