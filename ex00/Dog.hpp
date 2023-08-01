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

class Dog : public Animal {
    public :
        Dog();
        Dog(const Dog &copy);
        Dog& operator=(const Dog &obj);
        ~Dog();

        void makeSound() const;
};

#endif