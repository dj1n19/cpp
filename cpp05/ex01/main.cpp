/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 16:09:43 by bgenie            #+#    #+#             */
/*   Updated: 2023/08/28 23:32:40 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main(void)
{
	{
		try
		{
			Form f("Ulaire", 5, 1);
			Bureaucrat b("Grouillot", 100);
			b.signForm(f);
		}
		catch(Bureaucrat::GradeTooLowException& e)
		{
			std::cerr << e.what() << std::endl;
		}
		catch(Bureaucrat::GradeTooHighException& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	std::cout << "====================" << std::endl;

	{
		try
		{
			Form f("Ulaire", 5, 1);
			std::cout << f;
			Bureaucrat b("Archigrouillot", 1);
			b.signForm(f);
			std::cout << f;
		}
		catch(Bureaucrat::GradeTooLowException& e)
		{
			std::cerr << e.what() << std::endl;
		}
		catch(Bureaucrat::GradeTooHighException& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	std::cout << "====================" << std::endl;

	{
		try
		{
			Form f("Ulaire", 151, 0);
		}
		catch(Form::GradeTooHighException& e)
		{
			std::cerr << e.what() << std::endl;
		}
		catch(Form::GradeTooLowException& e)
		{
			std::cerr << e.what() << std::endl;
		}	
	}

	std::cout << "====================" << std::endl;

	{
		try
		{
			Form f("Ulaire", 151, 0);
		}
		catch(Form::GradeTooHighException& e)
		{
			std::cerr << e.what() << std::endl;
		}
		catch(Form::GradeTooLowException& e)
		{
			std::cerr << e.what() << std::endl;
		}	
	}
	return 0;
}