/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animmal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurodrig <aurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 21:31:38 by aurodrig          #+#    #+#             */
/*   Updated: 2025/05/06 21:34:59 by aurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal {
    protected:
        std::string type;
    public:
        Animal();
        virtual ~Animal();
        Animal(const Animal &other);
        Animal& operator=(const Animal &other);
        
        void setType(std::string inputType);
        std::string getType(void) const;
        virtual void makeSound() const;
};

#endif