/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:40:30 by bgenie            #+#    #+#             */
/*   Updated: 2023/11/21 18:21:21 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ARRAY__
#define __ARRAY__
#include <exception>
#include <cstdlib>

template <typename T> class Array
{
	private:

		unsigned int	_size;
		T*				_arr;
	
	public:

		Array(void);
		Array(unsigned int n);
		~Array(void);
		Array(const Array<T>& arr);
		Array<T>& operator=(const Array<T>& arr);
		
		unsigned int	size(void);
		T&				operator[](unsigned int i);
};

template <typename T> Array<T>::Array(void): _size(0), _arr(NULL) {}

template <typename T> Array<T>::Array(unsigned int n): _size(n)
{
	_arr = new T[n];
}

template <typename T> Array<T>::~Array(void)
{
	delete[] _arr;
}

template <typename T> Array<T>::Array(const Array<T>& arr)
{
	this->_arr = new T[arr._size];
	this->_size = arr._size;
	for (unsigned int i = 0; i < this->size(); i++)
		this->_arr[i] = arr._arr[i];
}

template <typename T> Array<T>& Array<T>::operator=(const Array<T>& arr)
{
	if (arr._size == 0)
	{
		this->_arr = NULL;
		this->_size = 0;
		return *this;
	}
	this->_arr = new T[arr._size];
	this->_size = arr._size;
	for (unsigned int i = 0; i < size; i++)
		this->_arr[i] = arr[i];
	return *this;
}

template <typename T> unsigned int Array<T>::size(void)
{
	return _size;
}

template <typename T> T& Array<T>::operator[](unsigned int i)
{
	if (i >= _size)
		throw std::exception();
	return _arr[i];
}

#endif