/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AbsAnimal.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurodrig <aurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 21:31:38 by aurodrig          #+#    #+#             */
/*   Updated: 2025/06/11 15:09:15 by aurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ABSANIMAL_HPP
#define ABSANIMAL_HPP
#include <iostream>

class AbsAnimal {
    protected:
        std::string type;
    public:
        AbsAnimal();
        virtual ~AbsAnimal();
        AbsAnimal(const AbsAnimal &other);
        AbsAnimal& operator=(const AbsAnimal &other);
        
        void setType(std::string inputType);
        std::string getType(void) const;
        virtual void makeSound() const = 0;
};

#endif