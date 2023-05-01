/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zanejar <zanejar@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 00:59:18 by zanejar           #+#    #+#             */
/*   Updated: 2023/05/01 02:21:22 by zanejar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	// Animal test;
	Animal	*animals[4];

	for(int i = 0; i < 4; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Dog(), std::cout << std::endl;
		else
			animals[i] = new Cat(), std::cout << std::endl;
	}

	for(int i = 0; i < 4; i++)
		animals[i]->makeSound(), std::cout << std::endl;

	for(int i = 0; i < 4; i++)
		delete animals[i], std::cout << std::endl;

	return 0;
}