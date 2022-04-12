/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeju <yeju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 13:13:33 by yeju              #+#    #+#             */
/*   Updated: 2022/04/12 16:33:15 by yeju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void str_func(std::string &str)
{
    std::cout << str << std::endl;
}

void num_func(int &i)
{
    std::cout << i << std::endl;
}

void plus_func(int &a)
{
    plus(a);
    std::cout << a << std::endl;
}

int main ()
{
    std::string str[] = {"hello", "world", "!"};
    int num[] = {1, 2, 3, 4};
    int arr[] = {5, 6};

    iter(str, 4, str_func);
    std::cout << std::endl;
    iter(num, 3, num_func);
    std::cout << std::endl;
    iter(arr, 2, plus_func);

    return 0;
}