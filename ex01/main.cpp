/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeju <yeju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 13:13:33 by yeju              #+#    #+#             */
/*   Updated: 2022/04/12 13:20:05 by yeju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void str_func(std::string &str)
{
    std::cout << str << std::endl;
}


int main ()
{
    std::string str[] = {"hello", "world", "!"};
    // int num[] = {1, 2, 3, 4};

    iter(str, 3, str_func);


    return 0;
}