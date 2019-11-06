#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class Array
{
// constructors and destructors ------------------------------------------------
	public:
	Array()
	{
		try {
			this->arr = new T[NULL];
			this->_size = 0;
		}
		catch (...) {
			std::cout << "empty array alloc failed" << std::endl;
		}
	}
	Array(unsigned int n)
	{
		try {
			this->arr = new T[n] ;
			for (unsigned int tmp = 0;tmp < n;tmp++)
				arr[n] = 0;
			this->_size = n;
		}
		catch (...) {
			std::cout << "empty array alloc failed" << std::endl;
		}
	}
	Array(Array const & ref)
	{
		try {
			*this = ref;
		}
		catch (...) {
			std::cout << " copy constructor not sure how this failed ???" << std::endl;
		}
	}
Array&	operator= (Array const & ref)
	{
		try {
			this->arr = new T[ref._size];
			this->_size = ref._size;
			for (unsigned int tmp = 0;tmp < this->_size;tmp++)
				this->arr[tmp] = ref.arr[tmp];
			return (*this);
		}
		catch (...) {
			std::cout << "assignment operator failed" << std::endl;
		}
		return (*this);
	}
	~Array()
	{
		this->free_arr();
	}
// funcitons -------------------------------------------------------------------
	void free_arr()
	{
		try {
			delete[] this->arr;
		} catch (...) {
			;
		}
	}
	unsigned int size()
	{
		this->_size = (sizeof(this->arr) / sizeof(this->arr[0]));
		return (sizeof(this->arr) / sizeof(this->arr[0]));
	}
	unsigned int getSize()
	{
		this->size();
		return (this->_size);
	}
	T & getArrElem(unsigned int i)
	{
		return (this->arr[i]);
	}
T&	operator[] (unsigned int i)
	{
		if (i > this->_size)
		{
			std::cout << "position '" << i << "' is out of index" << std::endl;
			throw std::exception();
		}
		return (getArrElem(i));
	}
	private:
		T *arr;
		unsigned int _size;
};

#endif
