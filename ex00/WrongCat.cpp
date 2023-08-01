/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djmekki <djmekki@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 23:23:02 by djmekki           #+#    #+#             */
/*   Updated: 2023/08/01 23:23:02 by djmekki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat") {
    std::cout << R << "WrongCat default constructor" << C_OFF << std::endl;
}
WrongCat::WrongCat(const WrongCat &copy): WrongAnimal(copy) {
    std::cout << R << "WrongCat copy constructor" << C_OFF << std::endl;
    *this = copy;
}
WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor" << std::endl;
}
WrongCat &WrongCat::operator=(const WrongCat &obj) {
    this->_type = obj._type;
    return (*this);
}

void WrongCat::makeSound() const {
    std::cout << R << "* MEOW LIKE A WRONG CAT *" << C_OFF << std::endl;
}