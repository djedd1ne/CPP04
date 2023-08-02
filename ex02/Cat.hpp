/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djmekki <djmekki@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 21:43:09 by djmekki           #+#    #+#             */
/*   Updated: 2023/08/01 21:43:09 by djmekki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
    private:
        Brain *brain;
    
    public :
        Cat();
        Cat(const Cat &copy);
        Cat& operator=(const Cat &obj);
        virtual ~Cat();

        void makeSound() const;
        void generateIdeas(std::string ideas[100]);
        void printIdeas();
};

#endif