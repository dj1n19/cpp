/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 15:30:10 by bgenie            #+#    #+#             */
/*   Updated: 2023/06/23 14:22:55 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <string>
#include <iostream>

class ClapTrap
{
    private:
    
    ClapTrap(void);

    protected:

    std::string 	name;
	unsigned int	hp;
	unsigned int	ep;
	unsigned int	dmg;
    
    public:

    ClapTrap(std::string name);
	ClapTrap(const ClapTrap& ct);
	ClapTrap& operator=(const ClapTrap& ct);
    ~ClapTrap(void);

    void	attack(const std::string& target);
    void	takeDamage(unsigned int amount);
    void	beRepaired(unsigned int amount);
};

#endif