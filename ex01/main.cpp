/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeju <yeju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 13:13:33 by yeju              #+#    #+#             */
/*   Updated: 2022/04/12 16:56:25 by yeju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void str_func(std::string const &str)
{
    std::cout << str << std::endl;
}

void num_func(int const &i)
{
    std::cout << i << std::endl;
}

int main ()
{
    std::string str[] = {"hello", "world", "!"};
    int num[] = {1, 2, 3, 4};

    iter(str, 3, str_func);
    std::cout << std::endl;
    iter(num, 3, num_func);

    return 0;
}