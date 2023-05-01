/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zanejar <zanejar@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 00:58:18 by zanejar           #+#    #+#             */
/*   Updated: 2023/05/01 01:51:33 by zanejar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(void)
{
	std::cout << "Dog Default Constructor Called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(Dog const &copy)
{
	std::cout << "Dog Copy Constructor Called" << std::endl;
	*this = copy;
}

Dog::~Dog(void)
{
	std::cout << "Dog Destructor Called" << std::endl;
	delete this->brain;
}

Dog &Dog::operator=(Dog const &copy)
{
	std::cout << "Dog Assignation Operator Called" << std::endl;
	this->type = copy.type;
	this->brain = new Brain(*copy.brain);
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << "Woof" << std::endl;
}
