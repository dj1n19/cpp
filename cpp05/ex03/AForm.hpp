/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:44:53 by bgenie            #+#    #+#             */
/*   Updated: 2023/11/06 15:08:34 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __A_FORM__
#define __A_FORM__
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	protected:
		
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

		class FormNotSignedException: std::exception
		{
			public:

			const char* what(void)
			{
				return "FormNotSignedException";
			}
		};

		AForm(void);
		AForm(std::string name, unsigned int gradeToSign, unsigned int gradeToExec);
		virtual ~AForm(void);
		AForm(const AForm& f);
		AForm& operator=(const AForm& f);

		std::string 	getName(void) const;
		bool 			isSigned(void) const;
		unsigned int 	getGradeToSign(void) const;
		unsigned int 	getGradeToExec(void) const;

		void			beSigned(const Bureaucrat &b);
		virtual void	execute(Bureaucrat const & executor) const = 0;
};

std::ostream& operator<<(std::ostream& out, AForm const & f);

#endif