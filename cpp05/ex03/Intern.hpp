/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:31:05 by bgenie            #+#    #+#             */
/*   Updated: 2023/11/06 14:55:30 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __INTERN__
#define __INTERN__
#include <string>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	public:

		Intern(void);
		~Intern(void);
		Intern(const Intern& i);
		Intern& operator=(const Intern& i);

		AForm* makeForm(std::string name, std::string target);
};

#endif