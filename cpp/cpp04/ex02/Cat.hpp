/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurodrig <aurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 21:55:36 by aurodrig          #+#    #+#             */
/*   Updated: 2025/06/11 15:18:58 by aurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include "AbsAnimal.hpp"
#include "Brain.hpp"

class Cat : public AbsAnimal{
    private:
        Brain* brain;
    public:
        Cat();
        ~Cat();
        Cat(const Cat &other);
        Cat& operator=(const Cat &other);
        
        void makeSound() const;
        void setBrainIdea(std::string idea, int index);
        void showBrainIdea(int index);
};

#endif