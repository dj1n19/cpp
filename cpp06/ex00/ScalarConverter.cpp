/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:25:06 by bgenie            #+#    #+#             */
/*   Updated: 2023/11/08 14:33:40 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void){}

ScalarConverter::~ScalarConverter(void){}

ScalarConverter::ScalarConverter(const ScalarConverter& s)
{
	*this = s;	
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& s)
{
	if (this == &s)
		return *this;
	return *this;
}

bool ScalarConverter::isChar(std::string literal)
{
	if (literal.size() == 1 && !isdigit(literal.at(0)))
		return true;
	return false;
}

bool ScalarConverter::isInt(std::string literal)
{
	size_t i = 0;
		
	if (literal.at(0) == '-')
		i = 1;
	for(; i < literal.size(); i++)
	{
		if (!isdigit(literal.at(i)))
			return false;
	}
	return true;
}

bool ScalarConverter::isFloat(std::string literal)
{
	size_t i = 0;

	if (literal.compare(literal.size() - 1, 1, "f") != 0)
		return false;
	if (literal.find_first_of(".") != literal.find_last_of("."))
		return false;
	if (literal.at(0) == '-')
		i = 1;
	for (; i < literal.size() - 1; i++)
	{
		if (!isdigit(literal.at(i)) && literal.at(i) != '.')
			return false;
	}
	return true;
}

bool ScalarConverter::isDouble(std::string literal)
{
	size_t i = 0;
	
	if (literal.find_first_of(".") != literal.find_last_of("."))
		return false;
	if (literal.at(0) == '-')
		i = 1;
	for (; i < literal.size(); i++)
	{
		if (literal.at(i) == '.')
			continue;
		if (!isdigit(literal.at(i)))
			return false;
	}
	return true;
}

bool ScalarConverter::isPseudoLiteral(std::string literal)
{
	if (literal == "-inf" || literal == "+inf"
		|| literal == "-inff" || literal == "+inff"
		|| literal == "nan" || literal == "nanf")
		return true;
	return false;
}

void ScalarConverter::printChar(std::string literal)
{
	std::cout << "char: '" << literal.at(0) << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(literal.at(0)) << std::endl;
	std::cout << "float: " << static_cast<float>(literal.at(0)) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(literal.at(0)) << ".0" << std::endl;
}

void ScalarConverter::printInt(std::string literal)
{
	int i;
	std::stringstream ss(literal);
	
	ss >> i;
	if (ss.fail())
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: overflow" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
		return;
	}
	if (!isprint(i))
		std::cout << "char: non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl; 
	std::cout << "int :" << i << std::endl;
	std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;	
}

void ScalarConverter::printFloat(std::string literal)
{
	float f;
	std::stringstream ss(literal);

	ss >> f;
	if (ss.fail())
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: overflow" << std::endl;
		std::cout << "double: impossible" << std::endl;
		return;
	}
	if (!isprint(f))
		std::cout << "char: non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(f) << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(f) << std::endl;
	if (f == static_cast<int>(f))
	{
		std::cout << "float: " << f << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(f) << ".0" << std::endl;
	}
	else
	{
		std::cout << "float: " << f << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(f) << std::endl;
	}
}

void ScalarConverter::printDouble(std::string literal)
{
	double d;
	std::stringstream ss(literal);
	
	ss >> d;
	if (ss.fail())
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: overflow" << std::endl;
		return;
	}
	if (!isprint(d))
		std::cout << "char: non diplayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(d) << std::endl;
	if (d == static_cast<int>(d))
	{
		std::cout << "float: " << static_cast<float>(d) << ".0f" << std::endl;
		std::cout << "double: " << d  << ".0" << std::endl;
	}
	else
	{
		std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
		std::cout << "double: " << d << std::endl;	
	}
}

void ScalarConverter::printPseudo(std::string literal)
{ 
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	if (literal.at(0) == '-')
	{
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
	}
	else if (literal.at(0) == '+')
	{
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
	}
	else
	{
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
}

void ScalarConverter::convert(std::string literal)
{
	if (isPseudoLiteral(literal))
		printPseudo(literal);
	else if (isChar(literal))
		printChar(literal);
	else if (isInt(literal))
		printInt(literal);
	else if (isFloat(literal))
		printFloat(literal);
	else if (isDouble(literal))
		printDouble(literal);
	else
		std::cout << "unknown type" << std::endl;
}