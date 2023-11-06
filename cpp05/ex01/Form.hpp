/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:44:53 by bgenie            #+#    #+#             */
/*   Updated: 2023/08/27 19:02:32 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FORM__
#define __FORM__
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		
		const std::string 	_name;
		bool				_signed;
		const unsigned int	_gradeToSign;
		const unsigned int	_gradeToExec;

	public:

		class GradeTooLowException: std::exception
		{
			public:

			const char* what(void)
			{
				return "GradeTooLowException";
			}
		};

		class GradeTooHighException: std::exception
		{
			public:

			const char* what(void)
			{
				return "GradeTooHighException";
			}
		};

		Form(void);
		Form(std::string name, unsigned int gradeToSign, unsigned int gradeToExec);
		~Form(void);
		Form(const Form& f);
		Form& operator=(const Form& f);

		std::string 	getName(void) const;
		bool 			isSigned(void) const;
		unsigned int 	getGradeToSign(void) const;
		unsigned int 	getGradeToExec(void) const;

		void	beSigned(const Bureaucrat &b);
};

std::ostream& operator<<(std::ostream& out, Form const & f);

#endif