/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 14:54:11 by bgenie            #+#    #+#             */
/*   Updated: 2023/06/26 15:30:04 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG__
#define __DOG__
#include "Animal.hpp"

class Dog : public Animal
{
	public:
	
	Dog(void);
	~Dog(void);
	Dog(const Dog& d);
	Dog& operator=(const Dog& d);

	void makeSound(void) const;
};

#endif