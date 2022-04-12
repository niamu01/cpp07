/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeju <yeju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 12:57:01 by yeju              #+#    #+#             */
/*   Updated: 2022/04/12 16:33:15 by yeju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void plus(T& a)
{
    ++a;
};

template <typename T>
void iter(T *address, size_t len, void (*f)(T &))
{
    for (size_t i = 0; i < len; i++)
    {
        f(address[i]);
    }
}
#endif