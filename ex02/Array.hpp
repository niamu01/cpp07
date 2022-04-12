/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeju <yeju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 13:30:47 by yeju              #+#    #+#             */
/*   Updated: 2022/04/12 14:35:54 by yeju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>

class Array
{
private:
    T *_array;
    size_t _count;

public:
    Array()
    {
        _array = new T[0];
        _count = 0;
    };

    Array (unsigned int n)
    {
        _array = new T[n];
        _count = n;
    };

    Array(Array const &rhs)
    {
        _count = rhs._count;
        for (int i = 0; i < _count; i++)
        {
            _array[i] = rhs._array[i];
        }
        // _array = rhs._array;
    };

    ~Array()
    {
        delete[] _array;
    };
    
    Array<T>& operator=(Array<T> const & rhs)
    {
        _count = rhs._count;
        _array = rhs._array;
    };

    size_t size()
    {
        return (_count);
    };

    class outOfBounds : public std::exception
    {
        virtual const char *what() const throw()
        {
            return ("out of bounds!");
        }
    };
};


#endif