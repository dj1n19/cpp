/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:36:52 by bgenie            #+#    #+#             */
/*   Updated: 2023/11/03 16:55:07 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ROBOTOMY_REQUEST_FORM__
#define __ROBOTOMY_REQUEST_FORM__
#include "AForm.hpp"
#include <ctime>
#include <cstdlib>

class RobotomyRequestForm : public AForm
{
	private:
		
		std::string _target;
	
	public:

		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm(void);
		RobotomyRequestForm(const RobotomyRequestForm& p);
		RobotomyRequestForm& operator=(const RobotomyRequestForm& p);
		
		void	execute(Bureaucrat const & executor) const;
};

#endif