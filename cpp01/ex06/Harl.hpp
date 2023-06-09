/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 17:18:49 by bgenie            #+#    #+#             */
/*   Updated: 2023/06/07 17:22:02 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP
#include <string>
#include <iostream>

class Harl
{
	public:

	Harl(void);
	~Harl(void);

	void	complain(std::string level);

	private:

	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
};

#endif