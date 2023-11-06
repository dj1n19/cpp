/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:35:16 by bgenie            #+#    #+#             */
/*   Updated: 2023/11/06 15:02:27 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
	
}

Intern::~Intern(void)
{

}

Intern::Intern(const Intern& i)
{
	*this = i;
}

Intern& Intern::operator=(const Intern& i)
{
	if (this == &i)
		return *this;
	return *this;
}

AForm* Intern::makeForm(std::string name, std::string target)
{
	AForm *form;
	int formId;
	std::string formList[] = {"Shrubbery Creation", "Robotomy Request", "Presidential Pardon"};

	for (int i = 0; i < 3; i++)
	{
		if (name.compare(formList[i]) == 0)
		{
			formId = i;
			break;
		}
	}
	switch (formId)
	{
		case 0:
			form = new ShrubberyCreationForm(target);
			break;
		case 1:
			form = new RobotomyRequestForm(target);
			break;
		case 2:
			form = new PresidentialPardonForm(target);
			break;
		default:
			form = NULL;
			std::cout << "Invalid Form" << std::endl;
	}
	if (form)
		std::cout << "Intern create " << form->getName() << std::endl;
	return form;
}