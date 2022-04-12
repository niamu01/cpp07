/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeju <yeju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 12:57:01 by yeju              #+#    #+#             */
/*   Updated: 2022/04/12 17:21:23 by yeju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <typename T>
void swap(T& a, T& b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
};

template <typename T>
T& min(T& a, T& b)
{
    if (b > a)
        return (a);
    return (b);
};

template <typename T>
T& max(T& a, T& b)
{
    if (a > b)
        return (a);
    return (b);
};

class Comparison
{
private:
    int _value;
    Comparison();
public:
    Comparison(int value)
    {
        _value = value;
    }
    ~Comparison() {}
    
    Comparison &	operator=(const Comparison &rhs) 
    {
        this->_value = rhs._value; 
        return (*this);
    }

    bool operator>(Comparison const &rhs) const {
        return (this->_value > rhs._value);
    }

    bool operator<(Comparison const &rhs) const {
        return (this->_value < rhs._value);
    }

    bool operator>=(Comparison const &rhs) const {
        return (this->_value >= rhs._value);
    }

    bool operator<=(Comparison const &rhs) const {
        return (this->_value <= rhs._value);
    }

    bool operator==(Comparison const &rhs) const {
        return (this->_value == rhs._value);
    }

    bool operator!=(Comparison const &rhs) const {
        return (this->_value != rhs._value);
    }
};

#endif