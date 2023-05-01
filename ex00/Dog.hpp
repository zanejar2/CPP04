/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zanejar <zanejar@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 00:57:19 by zanejar           #+#    #+#             */
/*   Updated: 2023/05/01 00:58:01 by zanejar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include<iostream>

class Dog : public Animal
{
	public:
		Dog(void);
		Dog(Dog const &copy);
		virtual ~Dog(void);
		Dog &operator=(Dog const &copy);
		virtual void makeSound(void) const;
};

#endif