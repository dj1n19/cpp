/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 14:54:11 by bgenie            #+#    #+#             */
/*   Updated: 2023/06/24 03:27:09 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG__
#define __DOG__
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:

	Brain *brain;

	public:
	
	Dog(void);
	Dog(const Dog& d);
	~Dog(void);

	Dog& operator=(const Dog& d);

	void makeSound(void) const;
};

#endif