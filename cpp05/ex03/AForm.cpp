/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 17:06:20 by bgenie            #+#    #+#             */
/*   Updated: 2023/08/28 18:06:26 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(void): _name("NoName"), _signed(false), _gradeToSign(150), _gradeToExec(150)
{

}

AForm::AForm(std::string name, unsigned int gradeToSign, unsigned int gradeToExec): _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec)
{
	if (gradeToExec > 150 || gradeToSign > 150)
		throw AForm::GradeTooLowException();
	if (gradeToExec < 1 || gradeToSign < 1)
		throw AForm::GradeTooHighException();
}

AForm::~AForm(void)
{

}

AForm::AForm(const AForm& f): _name(f.getName()), _signed(f.isSigned()), _gradeToSign(f.getGradeToSign()), _gradeToExec(f.getGradeToExec())
{
	
}

AForm& AForm::operator=(const AForm& f)
{
	if (this == &f)
		return *this;
	this->_signed = f.isSigned();
	return *this;
}

std::string AForm::getName(void) const
{
	return this->_name;
}

bool AForm::isSigned(void) const
{
	return this->_signed;
}

unsigned int AForm::getGradeToSign(void) const
{
	return this->_gradeToSign;
}

unsigned int AForm::getGradeToExec(void) const
{
	return this->_gradeToExec;
}

void AForm::beSigned(const Bureaucrat& b)
{
	if (b.getGrade() <= this->getGradeToSign())
		this->_signed = true;
	else
		throw AForm::GradeTooLowException();
}

std::ostream& operator<<(std::ostream& out, AForm const & f)
{
	out << "Form " << f.getName() << ":" << std::endl;
	out << "signed: " << f.isSigned() << std::endl;
	out << "grade to sign: " << f.getGradeToSign() << std::endl;
	out << "grade to execute: " << f.getGradeToExec() << std::endl;
	return out;
}