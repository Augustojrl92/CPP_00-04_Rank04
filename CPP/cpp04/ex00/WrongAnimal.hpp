/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurodrig <aurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 22:00:56 by aurodrig          #+#    #+#             */
/*   Updated: 2025/06/11 16:29:17 by aurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>

class WrongAnimal {
    protected:
        std::string type;
    public:
        WrongAnimal();
         ~WrongAnimal();
        WrongAnimal(const WrongAnimal &other); 
        WrongAnimal& operator=(const WrongAnimal &other); 
        
        void setType(std::string inputType);
        std::string getType(void) const;
         void makeSound() const;
};

#endif
