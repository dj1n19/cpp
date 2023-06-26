/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 18:50:32 by bgenie            #+#    #+#             */
/*   Updated: 2023/06/23 18:54:39 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BRAIN__
#define __BRAIN__
#include <iostream>
#include <string>

class Brain
{
	private:

	std::string ideas[100];

	public:

	Brain(void);
	Brain(const Brain& b);
	~Brain(void);

	Brain& operator=(const Brain& b);
};

#endif