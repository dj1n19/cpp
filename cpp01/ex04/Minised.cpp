/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Minised.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 15:27:15 by bgenie            #+#    #+#             */
/*   Updated: 2023/06/07 17:10:01 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Minised.hpp"

Minised::Minised(void)
{

}

Minised::Minised(std::string infile, std::string str, std::string replacement)
{
	this->infs.open(infile, std::fstream::in);
	if ((this->infs.rdstate() & std::fstream::failbit) != 0)
	{
		std::cerr << "Error: fail to open file '" << infile << "'" << std::endl;
		delete this;
		exit(EXIT_FAILURE);
	}
	this->outfs.open(infile + ".replace", std::fstream::out);
	if ((this->outfs.rdstate() & std::fstream::failbit) != 0)
	{
		std::cerr << "Error: fail to open file '" << infile + ".replace" << "'" << std::endl;
		delete this;
		exit(EXIT_FAILURE);
	}
	this->str = str;
	this->replacement = replacement;
}

Minised::~Minised(void)
{
	this->infs.close();
	this->outfs.close();
}

void Minised::replace(void)
{
	std::string line;

	for(;;)
	{
		line = replaceLine();
		if ((this->infs.rdstate() & std::fstream::eofbit) != 0)
			return ;
		writeLine(line);
	}
}

std::string Minised::replaceLine(void)
{
	std::string line;
	size_t		res;

	std::getline(this->infs, line);
	if ((this->infs.rdstate() & std::fstream::eofbit) != 0)
		return line;
	res = line.find(this->str, 0);
	while (res != std::string::npos)
	{
		line.erase(res, this->str.size());
		line.insert(res, this->replacement);
		res = line.find(this->str, 0);
	}
	return line;
}

void Minised::writeLine(std::string line)
{
	this->outfs << line << std::endl;
}