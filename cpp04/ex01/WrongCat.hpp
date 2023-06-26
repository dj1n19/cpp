/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 18:33:26 by bgenie            #+#    #+#             */
/*   Updated: 2023/06/26 15:34:51 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONG_CAT__
#define __WRONG_CAT__
#include "WrongAnimal.hpp"
#include <string>
#include <iostream>

class WrongCat : public WrongAnimal
{
	public:

	WrongCat(void);
	~WrongCat(void);
	WrongCat(const WrongCat& c);
	WrongCat& operator=(const WrongCat& c);

	void makeSound(void) const;
};

#endif