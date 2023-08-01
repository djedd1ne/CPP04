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

Dog::Dog() {
    std::cout << "Dog default constructor" << std::endl;
    _type = "Dog";
    brain = new Brain();
}
Dog::Dog(const Dog &copy): Animal(copy) {
    std::cout << "Dog copy constructor" << std::endl;
    this->brain = new Brain(*copy.brain);
    *this = copy;
}
Dog::~Dog() {
    std::cout << "Dog destructor" << std::endl;
    delete(brain);
}
Dog &Dog::operator=(const Dog &obj) {
    for (int i = 0; i < 100; i++)
    {
        if (obj.brain->getIdea(i).empty())
            break;
        this->brain->setIdea(i, obj.brain->getIdea(i));
    }
    this->_type = obj._type;
    return (*this);
}

void Dog::makeSound() const {
    std::cout << "* WOOF *" << std::endl;
}

void Dog::generateIdeas(std::string ideas[100])
{
    for (int i; i < 100; i++)
        brain->setIdea(i, ideas[i]);
}

void Dog::printIdeas() {
    for (int i = 0; i < 100; i++)
    {
        if (brain->getIdea(i).empty())
            break;
        std::cout << brain->getIdea(i) << std::endl;
    }
}