/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 15:30:10 by bgenie            #+#    #+#             */
/*   Updated: 2023/06/21 15:43:49 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <string>
#include <iostream>

class ClapTrap
{
    public:

    ClapTrap(void);
    ClapTrap(std::string name);
	ClapTrap(const ClapTrap& ct);
	ClapTrap& operator=(const ClapTrap& ct);
    ~ClapTrap(void);

    void	attack(const std::string& target);
    void	takeDamage(unsigned int amount);
    void	beRepaired(unsigned int amount);

    private:

    std::string 	name;
	unsigned int	hp;
	unsigned int	ep;
	unsigned int	dmg;
};

#endif