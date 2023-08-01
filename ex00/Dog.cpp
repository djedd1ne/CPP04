/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djmekki <djmekki@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 23:00:52 by djmekki           #+#    #+#             */
/*   Updated: 2023/08/01 23:00:52 by djmekki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog") {
    std::cout << "Dog default constructor" << std::endl;
}
Dog::Dog(const Dog &copy): Animal(copy) {
    std::cout << "Dog copy constructor" << std::endl;
    *this = copy;
}
Dog::~Dog() {
    std::cout << "Dog destructor" << std::endl;
}
Dog &Dog::operator=(const Dog &obj) {
    this->_type = obj._type;
    return (*this);
}

void Dog::makeSound() const {
    std::cout << "* WOOF *" << std::endl;
}