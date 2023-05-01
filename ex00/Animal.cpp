/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zanejar <zanejar@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 16:40:39 by zanejar           #+#    #+#             */
/*   Updated: 2023/04/29 21:03:19 by zanejar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal Default Constructor Called" << std::endl;
}

Animal::Animal(std::string type)
{
	std::cout << "Animal Parametric Constructor Called" << std::endl;
	this->type = type;
}

Animal::Animal(Animal const &copy)
{
	std::cout << "Animal Copy Constructor Called" << std::endl;
	*this = copy;
}

Animal::~Animal(void)
{
	std::cout << "Animal Destructor Called" << std::endl;
}

Animal &Animal::operator=(Animal const &copy)
{
	std::cout << "Animal Assignation Operator Called" << std::endl;
	this->type = copy.type;
	return (*this);
}

void Animal::makeSound(void) const
{
	std::cout << "Animal Sound" << std::endl;
}

std::string Animal::getType(void) const
{
	return (this->type);
}