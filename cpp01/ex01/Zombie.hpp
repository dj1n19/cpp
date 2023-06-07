/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 02:07:36 by bgenie            #+#    #+#             */
/*   Updated: 2023/06/07 02:47:49 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <string>
#include <iostream>

class Zombie
{
	public:

	Zombie(void);
	Zombie(std::string name);
	~Zombie(void);

	void announce(void);
	void setName(std::string name);

	private:

	std::string name;
};

#endif