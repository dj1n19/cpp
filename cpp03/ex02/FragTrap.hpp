/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 13:51:45 by bgenie            #+#    #+#             */
/*   Updated: 2023/06/23 13:57:57 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FRAGTRAP__
#define __FRAGTRAP__
#include "ClapTrap.hpp"
#include <string>
#include <iostream>

class FragTrap: public ClapTrap
{
	private:

	FragTrap(void);

	public:

	FragTrap(std::string name);
	~FragTrap(void);

	void highFivesGuys(void);
};

#endif