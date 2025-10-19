/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurodrig <aurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 21:40:50 by aurodrig          #+#    #+#             */
/*   Updated: 2025/06/11 15:18:47 by aurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include "AbsAnimal.hpp"
#include "Brain.hpp"

class Dog : public AbsAnimal{
    private:
        Brain* brain;
    public:
        Dog();
        ~Dog();
        Dog(const Dog &other);
        Dog& operator=(const Dog &other);
        
        void makeSound() const;
        void setBrainIdea(std::string idea, int index);
        void showBrainIdea(int index);
};

#endif