/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djmekki <djmekki@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 22:15:48 by djmekki           #+#    #+#             */
/*   Updated: 2023/08/01 22:15:48 by djmekki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal") {
    std::cout << G << "Animal default constructor" << C_OFF << std::endl;
}
Animal::Animal(const std::string &type) : _type(type) {
    std::cout << G << "Animal Type constructor" << C_OFF << std::endl;
}
Animal::Animal(const Animal &copy) {
    std::cout << G << "Animal copy constructor" << C_OFF << std::endl;
}
Animal& Animal::operator=(const Animal &obj) {
    this->_type = obj._type;
    return (*this);
}
Animal::~Animal() {
    std::cout << G << "Animal destructor" << C_OFF << std::endl;
}
        
std::string Animal::getType(void) const {
    return (this->_type);
}
void Animal::makeSound() const {
    std::cout << G <<  "* UNDEFINED SOUND*" << C_OFF << std::endl;
}