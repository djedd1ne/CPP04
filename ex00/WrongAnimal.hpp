/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djmekki <djmekki@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 21:53:55 by djmekki           #+#    #+#             */
/*   Updated: 2023/08/01 21:53:55 by djmekki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>
#include <string>
#define R "\x1B[31m"
#define G "\x1B[32m"
#define B "\x1B[36m"
#define C_OFF "\033[0m"

class WrongAnimal {
    protected:
        std::string _type;
    
    public:
        WrongAnimal();
        WrongAnimal(const std::string &type);
        WrongAnimal(const WrongAnimal &copy);
        ~WrongAnimal();

        WrongAnimal& operator=(const WrongAnimal &obj);

        std::string getType(void) const;

        void makeSound() const;
};

#endif