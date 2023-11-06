/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:53:10 by bgenie            #+#    #+#             */
/*   Updated: 2023/11/03 15:59:42 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SHRUBBERY_CREATION_FORM__
#define __SHRUBBERY_CREATION_FORM__
#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
	private:
		
		std::string _target;
	
	public:

		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm(void);
		ShrubberyCreationForm(const ShrubberyCreationForm& p);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& p);
		
		void	execute(Bureaucrat const & executor) const;
};

#endif