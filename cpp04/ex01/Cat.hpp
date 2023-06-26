/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 14:54:11 by bgenie            #+#    #+#             */
/*   Updated: 2023/06/26 15:41:28 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT__
#define __CAT__
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:

	Brain* brain;

	public:
	
	Cat(void);
	~Cat(void);
	Cat(const Cat& c);

	Cat& operator=(const Cat& c);

	void makeSound(void) const;
};

#endif