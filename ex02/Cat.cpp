/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zanejar <zanejar@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 00:55:07 by zanejar           #+#    #+#             */
/*   Updated: 2023/05/01 01:50:33 by zanejar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat(void)
{
	std::cout << "Cat Default Constructor Called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(Cat const &copy)
{
	std::cout << "Cat Copy Constructor Called" << std::endl;
	*this = copy;
}

Cat::~Cat(void)
{
	std::cout << "Cat Destructor Called" << std::endl;
	delete this->brain;
}

Cat &Cat::operator=(Cat const &copy)
{
	std::cout << "Cat Assignation Operator Called" << std::endl;
	this->type = copy.type;
	this->brain = new Brain(*copy.brain);
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout << "Meow" << std::endl;
}