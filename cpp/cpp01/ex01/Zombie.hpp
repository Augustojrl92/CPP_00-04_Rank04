/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurodrig <aurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 22:30:08 by aurodrig          #+#    #+#             */
/*   Updated: 2025/04/08 22:45:15 by aurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include "iostream"
#include "iomanip"
#include "string"

class Zombie {

private:
    std::string name;

public:
    Zombie(void);
    ~Zombie(void);

    void announce(void);
    void setName(std::string name);
};


#endif