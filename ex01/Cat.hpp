/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zanejar <zanejar@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 00:53:16 by zanejar           #+#    #+#             */
/*   Updated: 2023/05/01 02:35:17 by zanejar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"
# include<iostream>

class Cat : public Animal
{
	private:
		Brain *brain;
		
	public:
		Cat(void);
		Cat(Cat const &copy);
		virtual ~Cat(void);
		Cat &operator=(Cat const &copy);
		virtual void makeSound(void) const;
		Brain *getBrain(void) const;
};

#endif