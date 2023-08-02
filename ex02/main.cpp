/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djmekki <djmekki@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 23:04:55 by djmekki           #+#    #+#             */
/*   Updated: 2023/08/01 23:04:55 by djmekki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


int main(void) {

	Animal *animal[2];

	animal[0] = new Dog();
	animal[1] = new Cat();

	animal[0]->makeSound();
	animal[1]->makeSound();
	delete(animal[0]);
	delete(animal[1]);

	return (0);
}