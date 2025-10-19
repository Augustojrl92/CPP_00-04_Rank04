/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurodrig <aurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 22:00:56 by aurodrig          #+#    #+#             */
/*   Updated: 2025/05/06 22:36:13 by aurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>

class WrongAnimal {
    protected:
        std::string type;
    public:
        WrongAnimal(); //Constructor
         virtual~WrongAnimal(); //Destructor, sendo virtual passa a ser o filho a destruir o WrongAnimal
        WrongAnimal(const WrongAnimal &other); //Copy constructor
        WrongAnimal& operator=(const WrongAnimal &other); //Copy assign operator
        
        void setType(std::string inputType);
        std::string getType(void) const;
         virtual void makeSound() const;
};

#endif