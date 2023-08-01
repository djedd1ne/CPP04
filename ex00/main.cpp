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

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void) {
	const Animal	*meta = new Animal();
	const Animal	*j = new Dog();
	const Animal	*i = new Cat();

	std::cout << "j is " << j->getType() << " : ";
	j->makeSound();
	std::cout << "i is " << i->getType() << " : ";
	i->makeSound();
	std::cout << "m is " << meta->getType() << " : ";
	meta->makeSound();

	delete i;
	delete j;
	delete meta;
	
	//WrongCat test
	const WrongAnimal	*z = new WrongCat();

	std::cout << "z is " << z->getType() << " : ";
	z->makeSound();
	
	delete z;
}