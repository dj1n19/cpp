/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 16:40:53 by bgenie            #+#    #+#             */
/*   Updated: 2023/06/23 13:55:50 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	private:
	
	ScavTrap(void);

	public:
	
	ScavTrap(std::string name);
	~ScavTrap(void);

	void	attack(const std::string& target);
	void	guardGate();
};

#endif