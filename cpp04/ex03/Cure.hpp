/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 16:19:43 by bgenie            #+#    #+#             */
/*   Updated: 2023/06/26 13:59:39 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CURE__
#define __CURE__
#include "AMateria.hpp"

class Cure : public AMateria
{
	public:

		Cure(void);
		~Cure(void);
		Cure(const Cure& c);

		Cure& operator=(const Cure& c);

		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif