/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <bazuara@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 13:50:02 by bazuara           #+#    #+#             */
/*   Updated: 2024/10/04 10:57:21 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iter.h>

int main()
{
    int intArray[] = {1, 2, 3, 4, 5};
    float floatArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    std::string stringArray[] = {"one", "two", "three", "four", "five"};


    // void iter(T *array, size_t size, void (*func)(T const &))
    iter(intArray, 5, print);
    iter(floatArray, 5, print);
    iter(stringArray, 5, print);

    return 0;
}