/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:56:14 by bgenie            #+#    #+#             */
/*   Updated: 2023/11/06 15:06:45 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("Presidential Pardon", 25, 5), _target(target)
{
	
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& p): AForm(p)
{
	*this = p;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& p)
{
	if (this == &p)
		return *this;
	this->_target = p._target;
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (!this->isSigned())
	{
		throw FormNotSignedException();
	}
	else if (executor.getGrade() > this->getGradeToExec())
	{
		throw GradeTooLowException();
	}
	else
	{
		std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	}
}