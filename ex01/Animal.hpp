/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djmekki <djmekki@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 21:30:44 by djmekki           #+#    #+#             */
/*   Updated: 2023/08/01 21:30:44 by djmekki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#define R "\x1B[31m"
#define G "\x1B[32m"
#define B "\x1B[36m"
#define C_OFF "\033[0m"
#include <iostream>
#include <string>

class Animal {
    protected:
        std::string _type;
    
    public:
        Animal();
        Animal(const Animal &copy);
        virtual ~Animal();
        Animal& operator=(const Animal &obj);

        std::string getType(void) const;
        virtual void makeSound() const;
};

#endif