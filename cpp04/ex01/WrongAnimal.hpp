/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 18:28:38 by bgenie            #+#    #+#             */
/*   Updated: 2023/06/23 18:31:28 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONG_ANIMAL__
#define __WRONG_ANIMAL__
#include <string>
#include <iostream>

class WrongAnimal
{
	protected:

	std::string type;

	public:

	WrongAnimal(void);
	WrongAnimal(const WrongAnimal& a);
	WrongAnimal& operator=(const WrongAnimal& a);
	~WrongAnimal(void);

	void makeSound(void) const;
	std::string getType(void) const;
};

#endif