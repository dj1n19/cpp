/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:54:37 by bgenie            #+#    #+#             */
/*   Updated: 2023/11/08 15:01:11 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SERIALIZER__
#define __SERIALIZER__
#include <cstdint>
#include "Data.hpp"

class Serializer
{
	private:

		Serializer(void);
		~Serializer(void);
		Serializer(const Serializer& s);
		Serializer& operator=(const Serializer& s);

	public:

		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif