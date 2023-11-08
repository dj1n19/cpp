/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:19:27 by bgenie            #+#    #+#             */
/*   Updated: 2023/11/07 18:25:44 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCALAR_CONVERTER__
#define __SCALAR_CONVERTER__
#include <string>
#include <sstream>
#include <iostream>
#include <limits>

class ScalarConverter
{
	private:

		ScalarConverter(void);
		~ScalarConverter(void);
		ScalarConverter(const ScalarConverter& s);
		ScalarConverter& operator=(const ScalarConverter& s);

		static bool isChar(std::string literal);
		static bool isInt(std::string literal);
		static bool isFloat(std::string literal);
		static bool isDouble(std::string literal);
		static bool isPseudoLiteral(std::string literal);

		static void printChar(std::string literal);
		static void printInt(std::string literal);
		static void printFloat(std::string literal);
		static void printDouble(std::string literal);
		static void printPseudo(std::string literal);
	
	public:
		
		static void convert(std::string literal);
};

#endif