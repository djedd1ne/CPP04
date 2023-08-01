/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djmekki <djmekki@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 22:39:01 by djmekki           #+#    #+#             */
/*   Updated: 2023/08/01 22:39:01 by djmekki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat") {
    std::cout << "Cat default constructor" << std::endl;
}
Cat::Cat(const Cat &copy): Animal(copy) {
    std::cout << "Cat copy constructor" << std::endl;
    *this = copy;
}
Cat::~Cat() {
    std::cout << "Cat destructor" << std::endl;
}
Cat &Cat::operator=(const Cat &obj) {
    this->_type = obj._type;
    return (*this);
}

void Cat::makeSound() const {
    std::cout << "* MEOW *" << std::endl;
}