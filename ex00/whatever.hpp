/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeju <yeju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 12:57:01 by yeju              #+#    #+#             */
/*   Updated: 2022/04/12 13:06:15 by yeju             ###   ########.fr       */
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

#endif

// 이러한 함수는 모든 유형의 인수로 호출할 수 있습니다. 
// 유일한 요구 사항은 두 인수의 유형이 동일해야 하고 모든 비교 연산자를 지원해야 한다는 것입니다.
