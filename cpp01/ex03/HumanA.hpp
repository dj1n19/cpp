/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 03:30:41 by bgenie            #+#    #+#             */
/*   Updated: 2023/06/07 04:12:12 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP
#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	public:

	HumanA(std::string name, Weapon &weapon);
	~HumanA(void);

	void	attack(void);
	void	setWeapon(Weapon weapon);

	private:

	std::string name;
	Weapon&		weapon;
};

#endif