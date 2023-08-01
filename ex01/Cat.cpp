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

Cat::Cat(void) {
    std::cout << "Cat default constructor" << std::endl;
    _type = "Cat";
    brain = new Brain();
}
Cat::Cat(const Cat &copy): Animal() {
    std::cout << "Cat copy constructor" << std::endl;
    this->brain = new Brain(*copy.brain);
    this->_type = copy._type;
}
Cat::~Cat() {
    std::cout << "Cat destructor" << std::endl;
    delete(brain);
}
Cat &Cat::operator=(const Cat &obj) {
    for (int i = 0; i < 100; i++)
    {
        if (obj.brain->getIdea(i).empty())
            break;
        this->brain->setIdea(i, obj.brain->getIdea(i));
    }
    this->_type = obj._type;
    return (*this);
}

void Cat::makeSound() const {
    std::cout << "* MEOW *" << std::endl;
}

void Cat::generateIdeas(std::string ideas[100])
{
    for (int i; i < 100; i++)
        brain->setIdea(i, ideas[i]);
}

void Cat::printIdeas() {
    for (int i = 0; i < 100; i++)
    {
        if (brain->getIdea(i).empty())
            break;
        std::cout << brain->getIdea(i) << std::endl;
    }
}