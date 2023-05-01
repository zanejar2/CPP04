/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zanejar <zanejar@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 00:55:07 by zanejar           #+#    #+#             */
/*   Updated: 2023/05/01 02:38:43 by zanejar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat Default Constructor Called" << std::endl;
	this->type = "Cat";
}

Cat::Cat(Cat const &copy)
{
	std::cout << "Cat Copy Constructor Called" << std::endl;
	*this = copy;
}

Cat::~Cat(void)
{
	std::cout << "Cat Destructor Called" << std::endl;
}

Cat &Cat::operator=(Cat const &copy)
{
	std::cout << "Cat Assignation Operator Called" << std::endl;
	this->type = copy.type;
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout << "Meow" << std::endl;
}