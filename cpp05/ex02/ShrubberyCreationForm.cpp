/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:55:57 by bgenie            #+#    #+#             */
/*   Updated: 2023/11/06 14:28:00 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("Shrubbery Creation Form", 145, 137), _target(target)
{
	
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& p): AForm(p)
{
	*this = p;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& p)
{
	if (this == &p)
		return *this;
	this->_target = p._target;
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	
	if (!this->isSigned())
	{
		throw FormNotSignedException();
	}
	else if (executor.getGrade() > this->getGradeToExec())
	{
		throw GradeTooLowException();
	}
	else
	{
		std::ofstream fs;
		std::string fileName = this->_target;
		
		fileName.append("_shrubbery");
		fs.open(fileName.c_str());
		if ((fs.rdstate() & std::ofstream::failbit) != 0)
		{
			std::cerr << "Error: cannot open '" << fileName << "'" << std::endl;
			return;
		}
		fs << "                                                         ." << std::endl;
		fs << "                                              .         ;  " << std::endl;
		fs << "                 .              .              ;%     ;;   " << std::endl;
		fs << "                   ,           ,                :;%  %;   " << std::endl;
		fs << "                    :         ;                   :;%;'     .,   " << std::endl;
		fs << "           ,.        %;     %;            ;        %;'    ,;" << std::endl;
		fs << "             ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
		fs << "              %;       %;%;      ,  ;       %;  ;%;   ,%;' " << std::endl;
		fs << "               ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
		fs << "                `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
		fs << "                 `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
		fs << "                    `:%;.  :;bd%;          %;@%;'" << std::endl;
		fs << "                      `@%:.  :;%.         ;@@%;'   " << std::endl;
		fs << "                        `@%.  `;@%.      ;@@%;         " << std::endl;
		fs << "                          `@%%. `@%%    ;@@%;        " << std::endl;
		fs << "                            ;@%. :@%%  %@@%;       " << std::endl;
		fs << "                              %@bd%%%bd%%:;     " << std::endl;
		fs << "                                #@%%%%%:;;" << std::endl;
		fs << "                                %@@%%%::;" << std::endl;
		fs << "                                %@@@%(o);  . '         " << std::endl;
		fs << "                                %@@@o%;:(.,'         " << std::endl;
		fs << "                            `.. %@@@o%::;         " << std::endl;
		fs << "                               `)@@@o%::;         " << std::endl;
		fs << "                                %@@(o)::;        " << std::endl;
		fs << "                               .%@@@@%::;         " << std::endl;
		fs << "                               ;%@@@@%::;.          " << std::endl;
		fs << "                              ;%@@@@%%:;;;. " << std::endl;
		fs << "                          ...;%@@@@@%%:;;;;,.." << std::endl;
		fs.close();
	}
}