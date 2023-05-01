/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zanejar <zanejar@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 01:11:12 by zanejar           #+#    #+#             */
/*   Updated: 2023/05/01 01:11:49 by zanejar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "WrongCat Default Constructor Called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const &copy)
{
	std::cout << "WrongCat Copy Constructor Called" << std::endl;
	*this = copy;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat Destructor Called" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &copy)
{
	std::cout << "WrongCat Assignation Operator Called" << std::endl;
	this->type = copy.type;
	return (*this);
}

void WrongCat::makeSound(void) const
{
	std::cout << "Meow" << std::endl;
}