/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:46:48 by bgenie            #+#    #+#             */
/*   Updated: 2023/10/30 14:18:57 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PRESIDENTIAL_PARDON_FORM__
#define __PRESIDENTIAL_PARDON_FORM__
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		
		std::string _target;
	
	public:

		PresidentialPardonForm(std::string target);
		~PresidentialPardonForm(void);
		PresidentialPardonForm(const PresidentialPardonForm& p);
		PresidentialPardonForm& operator=(const PresidentialPardonForm& p);
		
		void	execute(Bureaucrat const & executor) const;
};

#endif