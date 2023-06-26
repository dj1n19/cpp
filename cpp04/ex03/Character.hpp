/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 16:50:26 by bgenie            #+#    #+#             */
/*   Updated: 2023/06/24 19:10:46 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CHARACTER__
#define __CHARACTER__
#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:

		std::string _name;
		AMateria* 	_inventory[4];

	public:

		Character(void);
		Character(std::string name);
		Character(const Character& c);
		~Character(void);

		Character& operator=(const Character& c);

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

};

#endif