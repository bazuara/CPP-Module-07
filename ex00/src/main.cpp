/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <bazuara@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 13:50:02 by bazuara           #+#    #+#             */
/*   Updated: 2024/10/04 10:24:34 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.h"
#include <iostream>

int main()
{
    std::cout << "SWAP TEST" << std::endl;
    std::cout << "Int swap test:" << std::endl;
    int a = 2;
    int b = 3;

    std::cout << "a = " << a << ", b = " << b << std::endl;
    swap(a, b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << std::endl;

    std::cout << "String swap test:" << std::endl;
    std::string c = "hello";
    std::string d = "world";

    std::cout << "c = " << c << ", d = " << d << std::endl;
    swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << std::endl;

    std::cout << "Float swap test:" << std::endl;
    float e = 42.42f;
    float f = 21.21f;

    std::cout << "e = " << e << ", f = " << f << std::endl;
    swap(e, f);
    std::cout << "e = " << e << ", f = " << f << std::endl;
    std::cout << std::endl;

    std::cout << "MIN TEST" << std::endl;
    std::cout << "Int min test:" << std::endl;
    std::cout << "min(2, 3) = " << min(2, 3) << std::endl;
    std::cout << "min(3, 2) = " << min(3, 2) << std::endl;
    std::cout << std::endl;

    std::cout << "String min test:" << std::endl;
    std::cout << "min(\"hello\", \"world\") = " << min("hello", "world") << std::endl;
    std::cout << "min(\"world\", \"hello\") = " << min("world", "hello") << std::endl;
    std::cout << std::endl;

    std::cout << "Float min test:" << std::endl;
    std::cout << "min(42.42f, 21.21f) = " << min(42.42f, 21.21f) << std::endl;
    std::cout << "min(21.21f, 42.42f) = " << min(21.21f, 42.42f) << std::endl;
    std::cout << std::endl;

    std::cout << "MAX TEST" << std::endl;
    std::cout << "Int max test:" << std::endl;
    std::cout << "max(2, 3) = " << max(2, 3) << std::endl;
    std::cout << "max(3, 2) = " << max(3, 2) << std::endl;
    std::cout << std::endl;

    std::cout << "String max test:" << std::endl;
    std::cout << "max(\"hello\", \"world\") = " << max("hello", "world") << std::endl;
    std::cout << "max(\"world\", \"hello\") = " << max("world", "hello") << std::endl;
    std::cout << std::endl;

    std::cout << "Float max test:" << std::endl;
    std::cout << "max(42.42f, 21.21f) = " << max(42.42f, 21.21f) << std::endl;
    std::cout << "max(21.21f, 42.42f) = " << max(21.21f, 42.42f) << std::endl;
    std::cout << std::endl;

    return 0;
}