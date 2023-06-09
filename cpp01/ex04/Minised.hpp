/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Minised.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 15:23:35 by bgenie            #+#    #+#             */
/*   Updated: 2023/06/07 16:48:19 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISED_HPP
#define MINISED_HPP
#include <string>
#include <fstream>
#include <iostream>

class Minised
{
	public:

	Minised(void);
	Minised(std::string infile, std::string str, std::string replacement);
	~Minised(void);

	void	replace(void);

	private:

	std::fstream	infs;
	std::fstream	outfs;
	std::string		str;
	std::string		replacement;

	std::string replaceLine(void);
	void		writeLine(std::string line);
};

#endif