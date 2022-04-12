/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeju <yeju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 13:13:33 by yeju              #+#    #+#             */
/*   Updated: 2022/04/12 13:29:40 by yeju             ###   ########.fr       */
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

int main ()
{
    std::string str[] = {"hello", "world", "!"};
    int num[] = {1, 2, 3, 4};

    iter(str, 3, str_func);
    iter(num, 2, num_func);

    return 0;
}

//클래스형식 배열도 들어올 수 있음.