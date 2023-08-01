/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djmekki <djmekki@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 23:19:21 by djmekki           #+#    #+#             */
/*   Updated: 2023/08/01 23:19:21 by djmekki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("Animal") {
    std::cout << R << "[WrongAnimal] default constructor" << C_OFF << std::endl;
}
WrongAnimal::WrongAnimal(const std::string &type) : _type(type) {
    std::cout << R << "[WrongAnimal] Type constructor" << C_OFF << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal &copy) {
    std::cout << R << "[WrongAnimal] copy constructor" << C_OFF << std::endl;
}
WrongAnimal& WrongAnimal::operator=(const WrongAnimal &obj) {
    this->_type = obj._type;
    return (*this);
}
WrongAnimal::~WrongAnimal() {
    std::cout << R << "[WrongAnimal] destructor" << C_OFF << std::endl;
}
        
std::string WrongAnimal::getType(void) const {
    return (this->_type);
}
void WrongAnimal::makeSound() const {
    std::cout << R << "* WRONG ANIMAL UNDEFINED SOUND *" << C_OFF << std::endl;
}