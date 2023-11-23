/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 04:56:24 by bgenie            #+#    #+#             */
/*   Updated: 2023/11/23 05:22:36 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MUTANT_STACK__
#define __MUTANT_STACK__
#include <stack>

template <typename T> class MutantStack: public std::stack<T>
{
	public:
	
		MutantStack(): std::stack<T>() {}
		virtual ~MutantStack() {}
		MutantStack(const MutantStack& m): std::stack<T>(m) {}
		MutantStack<T> &operator=(const MutantStack& m)
		{
			std::stack<T>::operator=(m);
			return *this;
		}
		
		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin(){
			return this->c.begin();
		}

		iterator end(){
			return this->c.end();
		}
};

#endif