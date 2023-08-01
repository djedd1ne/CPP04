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

class Cat : public Animal {
    public :
        Cat();
        Cat(const Cat &copy);
        Cat& operator=(const Cat &obj);
        ~Cat();

        void makeSound() const;
};

#endif