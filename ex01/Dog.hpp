/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djmekki <djmekki@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 21:51:38 by djmekki           #+#    #+#             */
/*   Updated: 2023/08/01 21:51:38 by djmekki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
    private :
        Brain *brain;
    
    public :
        Dog();
        Dog(const Dog &copy);
        Dog& operator=(const Dog &obj);
        virtual ~Dog();

        void makeSound() const;
        void generateIdeas (std::string ideas[100]);
        void printIdeas();
};

#endif