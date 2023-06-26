/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 17:43:37 by bgenie            #+#    #+#             */
/*   Updated: 2023/06/24 18:57:26 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MATERIA_SOURCE__
#define __MATERIA_SOURCE__
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:

		AMateria* _memory[4];

	public:

		MateriaSource(void);
		MateriaSource(const MateriaSource& m);
		~MateriaSource(void);

		MateriaSource& operator=(const MateriaSource& m);

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};

#endif