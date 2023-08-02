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
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;
	delete i;

	std::string ideas[100] = {"milk", "fish", "food", "ball",};
	std::string ideas_num[100] = { "one", "two", "three", "fourtytwo"};

	std::cout << R << "=======" << C_OFF << std::endl;
	Cat cat;
	cat.generateIdeas(ideas);
	std::cout << G << "======" << C_OFF << std::endl;
	cat.printIdeas();
	std::cout << R << "======" << C_OFF << std::endl;
	Cat cat1;
	cat1.generateIdeas(ideas_num);
	cat1.printIdeas();
	cat1 = cat;
	std::cout << R << "=========" << C_OFF <<std::endl;
	cat1.printIdeas();
	std::cout << R << "=========" << C_OFF << std::endl;
	Cat cat2;
	std::cout << R << "==========" << C_OFF <<std::endl;
	Cat cat3;
	cat3 = cat2;
	std::cout << R << "=========" << C_OFF <<std::endl;
	return 0;
}