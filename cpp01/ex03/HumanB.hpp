/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 03:34:44 by bgenie            #+#    #+#             */
/*   Updated: 2023/06/07 04:10:44 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP
#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	public:

	HumanB(std::string name);
	~HumanB(void);

	void	attack(void);
	void 	setWeapon(Weapon& weapon);

	private:

	std::string name;
	Weapon*		weapon;
};

#endif