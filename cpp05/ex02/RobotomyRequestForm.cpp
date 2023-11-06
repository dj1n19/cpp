/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:43:40 by bgenie            #+#    #+#             */
/*   Updated: 2023/11/06 14:28:42 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("Robotomy Request Form", 72, 45), _target(target)
{
	
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& p): AForm(p)
{
	*this = p;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& p)
{
	if (this == &p)
		return *this;
	this->_target = p._target;
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
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
		std::srand(std::time(NULL));
		switch (std::rand() % 2)
		{
			case 0:
				std::cout << this->_target << "has failed his robotomy" << std::endl;
				break;
			case 1:
				std::cout << this->_target << " has been robotomized successfully" << std::endl;
				break;
		}
	}
}