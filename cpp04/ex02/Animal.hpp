/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 14:40:39 by bgenie            #+#    #+#             */
/*   Updated: 2023/06/24 14:26:15 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL__
#define __ANIMAL__
#include <string>
#include <iostream>

class Animal
{
	protected:

	std::string type;

	public:

	Animal(void);
	Animal(const Animal& a);
	virtual ~Animal(void);

	Animal& operator=(const Animal& a);
	
	virtual void makeSound(void) const = 0;
	std::string getType(void) const;
};

#endif