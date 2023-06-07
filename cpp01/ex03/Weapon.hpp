/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 03:15:59 by bgenie            #+#    #+#             */
/*   Updated: 2023/06/07 04:04:35 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <string>

class Weapon
{
	public:

	Weapon(std::string type);
	~Weapon(void);

	const std::string& getType(void);
	void setType(std::string type);

	private:

	std::string	type;
};

#endif