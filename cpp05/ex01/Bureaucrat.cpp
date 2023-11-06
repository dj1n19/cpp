/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 19:31:33 by bgenie            #+#    #+#             */
/*   Updated: 2023/08/27 19:07:05 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{

}

Bureaucrat::Bureaucrat(std::string name, unsigned int grade): _name(name), _grade(grade)
{
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::~Bureaucrat(void)
{

}

Bureaucrat::Bureaucrat(const Bureaucrat& b)
{
	// this->_name = b.getName();
	this->_grade = b.getGrade();
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& b)
{
	if (this == &b)
		return *this;
	// this->_name = b.getName();
	this->_grade = b.getGrade();
	return *this;
}

const std::string Bureaucrat::getName(void) const
{
	return this->_name;
}

unsigned int Bureaucrat::getGrade(void) const
{
	return this->_grade;
}

void Bureaucrat::incrementGrade(void)
{
	if (this->_grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;
}

void Bureaucrat::decrementGrade(void)
{
	if (this->_grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
}

void Bureaucrat::signForm(Form &f)
{
	try
	{
		f.beSigned(*this);
		std::cout << this->getName() << " signed " << f.getName() << "." << std::endl;
	}
	catch(Form::GradeTooLowException& e)
	{
		std::cout << this->getName() << " couldn't sign " << f.getName() << " because " << e.what() << "." << std::endl;
	}
	
}

std::ostream& operator<<(std::ostream& out, Bureaucrat const & b)
{
	out << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
	return out;
}