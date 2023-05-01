/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zanejar <zanejar@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 00:58:18 by zanejar           #+#    #+#             */
/*   Updated: 2023/05/01 00:59:05 by zanejar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog Default Constructor Called" << std::endl;
	this->type = "Dog";
}

Dog::Dog(Dog const &copy)
{
	std::cout << "Dog Copy Constructor Called" << std::endl;
	*this = copy;
}

Dog::~Dog(void)
{
	std::cout << "Dog Destructor Called" << std::endl;
}

Dog &Dog::operator=(Dog const &copy)
{
	std::cout << "Dog Assignation Operator Called" << std::endl;
	this->type = copy.type;
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << "Woof" << std::endl;
}
