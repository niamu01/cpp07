/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeju <yeju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 15:24:08 by yeju              #+#    #+#             */
/*   Updated: 2022/04/12 17:25:43 by yeju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

#define NUM 750

int main(int, char**)
{
    int *a = new int();
    std::cout << *a << std::endl;

    std::cout << "==================" << std::endl;

    Array<int> numbers(NUM);
    int* mirror = new int[NUM];

    
    for (int i = 0; i < NUM; i++)
    {
        numbers[i] = i;
    }
    
    for (int i = 0; i < NUM; i++)
    {
        mirror[i] = numbers[i];
    }


    for (int i = 0; i < NUM; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }

    Array<int> numbersA(numbers);

    for (int i = 0; i < NUM; i++)
    {
        numbers[i] = i + 1;
    }

    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        mirror[1] = NUM;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }

    std::cout << "numbers[1]: " << numbers[1] << std::endl;
    std::cout << "mirror[1]: " << mirror[1] << std::endl;
    std::cout << "numbersA[3]: " << numbersA[3] << std::endl;
    

    std::cout << numbers.size() << std::endl;

    return 0;
}