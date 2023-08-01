/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djmekki <djmekki@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 21:54:57 by djmekki           #+#    #+#             */
/*   Updated: 2023/08/01 21:54:57 by djmekki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
    public :
        WrongCat();
        WrongCat(const WrongCat &copy);
        WrongCat& operator=(const WrongCat &obj);
        ~WrongCat();

        void makeSound() const;
};

#endif