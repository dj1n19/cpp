/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 19:20:14 by bgenie            #+#    #+#             */
/*   Updated: 2023/08/27 19:02:45 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BUREAUCRAT__
#define __BUREAUCRAT__
#include <string>
#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	private:

		const std::string	_name;
		unsigned int		_grade;

	public:
		class GradeTooHighException : std::exception
		{
			public:
			
			const char* what(void)
			{
				return "GradeTooHighException";
			}
		};

		class GradeTooLowException : std::exception
		{
			public:

			const char* what(void)
			{
				return "GradeTooLowException";
			}
		};

		Bureaucrat(void);
		Bureaucrat(std::string name, unsigned int grade);
		~Bureaucrat(void);
		Bureaucrat(const Bureaucrat& b);

		Bureaucrat& operator=(const Bureaucrat& b);

		const std::string 	getName(void) const;
		unsigned int		getGrade(void) const;
		void				incrementGrade(void);
		void				decrementGrade(void);
		void				signForm(Form &f);

};

std::ostream& operator<<(std::ostream& out, Bureaucrat const & b);

#endif