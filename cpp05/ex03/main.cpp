/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 16:09:43 by bgenie            #+#    #+#             */
/*   Updated: 2023/11/06 15:10:31 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"
#include "Intern.hpp"
#include <iostream>

int main(void)
{
	try
	{
		Intern i;
		AForm* form;
		
		form = i.makeForm("GNAH", "GNAH");
		std::cout << std::endl;
		form = i.makeForm("Shrubbery Creation", "Shrubbery");
		std::cout << *form << std::endl;
		delete form;
		form = i.makeForm("Robotomy Request", "Robotomy");
		std::cout << *form << std::endl;
		delete form;
		form = i.makeForm("Presidential Pardon", "Pardon");
		std::cout << *form << std::endl;
		delete form;
	}
	catch(Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}