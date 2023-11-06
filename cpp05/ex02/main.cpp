/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 16:09:43 by bgenie            #+#    #+#             */
/*   Updated: 2023/11/06 14:26:42 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"
#include <iostream>

int main(void)
{
	{
		try
		{
			ShrubberyCreationForm shrubbery1("gnah");
			Bureaucrat sam("Sam", 100);
			sam.signForm(shrubbery1);
			sam.executeForm(shrubbery1);
		}
		catch(Bureaucrat::GradeTooLowException& e)
		{
			// std::cerr << e.what() << std::endl;
		}
		catch(Bureaucrat::GradeTooHighException& e)
		{
			// std::cerr << e.what() << std::endl;
		}
		try
		{
			ShrubberyCreationForm shrubbery2("gnih");
			Bureaucrat samini("samini", 150);
			samini.signForm(shrubbery2);
			samini.executeForm(shrubbery2);
		}
		catch(Bureaucrat::GradeTooLowException& e)
		{
			// std::cerr << e.what() << std::endl;
		}
		catch(Bureaucrat::GradeTooHighException& e)
		{
			// std::cerr << e.what() << std::endl;
		}
	}

	std::cout << "====================" << std::endl;

	{
		try
		{
			RobotomyRequestForm robotomy1("Gnoh");
			Bureaucrat b1("Bureaucrat1", 40);
			b1.signForm(robotomy1);
			b1.executeForm(robotomy1);
		}
		catch(Bureaucrat::GradeTooLowException& e)
		{
			std::cerr << e.what() << std::endl;
		}
		catch(Bureaucrat::GradeTooHighException& e)
		{
			std::cerr << e.what() << std::endl;
		}
		try
		{
			RobotomyRequestForm robotomy2("Gneh");
			Bureaucrat b2("Bureaucrat2", 50);
			b2.signForm(robotomy2);
			b2.executeForm(robotomy2);
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
			PresidentialPardonForm pardon1("Gneuh");
			Bureaucrat pres1("President1", 1);
			pres1.signForm(pardon1);
			pres1.executeForm(pardon1);
		}
		catch(Bureaucrat::GradeTooLowException& e)
		{
			std::cerr << e.what() << std::endl;
		}
		catch(Bureaucrat::GradeTooHighException& e)
		{
			std::cerr << e.what() << std::endl;
		}
		try
		{
			PresidentialPardonForm pardon2("Gnouh");
			Bureaucrat pres2("President2", 10);
			// pres2.signForm(pardon2);
			pres2.executeForm(pardon2);
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

	return 0;
}