/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djmekki <djmekki@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 00:32:27 by djmekki           #+#    #+#             */
/*   Updated: 2023/08/02 00:32:27 by djmekki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain default constructor" << std::endl;
}
Brain::Brain(const Brain &copy) {
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = copy._ideas[i];
}
Brain::~Brain() {
    std::cout << "Brain destructor" << std::endl;
}
Brain& Brain::operator=(const Brain &obj){
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = obj._ideas[i];
    return (*this);
}

void Brain::setIdea(int i, std::string idea) {
    _ideas[i] = idea;
}

std::string Brain::getIdea(int i) {
    return (_ideas[i]);
}
