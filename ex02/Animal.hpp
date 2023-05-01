/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zanejar <zanejar@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 01:45:39 by zanejar           #+#    #+#             */
/*   Updated: 2023/05/01 02:05:43 by zanejar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal(void);
		Animal(std::string type);
		Animal(Animal const &copy);
		virtual ~Animal(void);
		Animal &operator=(Animal const &copy);
		virtual void makeSound(void) const = 0;
		std::string getType(void) const;
};

#endif