/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 16:19:43 by bgenie            #+#    #+#             */
/*   Updated: 2023/06/26 14:00:37 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ICE__
#define __ICE__
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
	public:

		Ice(void);
		~Ice(void);
		Ice(const Ice& i);

		Ice& operator=(const Ice& i);

		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif