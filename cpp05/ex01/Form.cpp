/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 17:06:20 by bgenie            #+#    #+#             */
/*   Updated: 2023/08/28 18:06:26 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void): _name("NoName"), _signed(false), _gradeToSign(150), _gradeToExec(150)
{

}

Form::Form(std::string name, unsigned int gradeToSign, unsigned int gradeToExec): _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec)
{
	if (gradeToExec > 150 || gradeToSign > 150)
		throw Form::GradeTooLowException();
	if (gradeToExec < 1 || gradeToSign < 1)
		throw Form::GradeTooHighException();
}

Form::~Form(void)
{

}

Form::Form(const Form& f): _name(f.getName()), _signed(f.isSigned()), _gradeToSign(f.getGradeToSign()), _gradeToExec(f.getGradeToExec())
{
	
}

Form& Form::operator=(const Form& f)
{
	if (this == &f)
		return *this;
	this->_signed = f.isSigned();
	return *this;
}

std::string Form::getName(void) const
{
	return this->_name;
}

bool Form::isSigned(void) const
{
	return this->_signed;
}

unsigned int Form::getGradeToSign(void) const
{
	return this->_gradeToSign;
}

unsigned int Form::getGradeToExec(void) const
{
	return this->_gradeToExec;
}

void Form::beSigned(const Bureaucrat& b)
{
	if (b.getGrade() <= this->getGradeToSign())
		this->_signed = true;
	else
		throw Form::GradeTooLowException();
}

std::ostream& operator<<(std::ostream& out, Form const & f)
{
	out << "Form " << f.getName() << ":" << std::endl;
	out << "signed: " << f.isSigned() << std::endl;
	out << "grade to sign: " << f.getGradeToSign() << std::endl;
	out << "grade to execute: " << f.getGradeToExec() << std::endl;
	return out;
}