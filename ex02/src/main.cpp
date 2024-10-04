/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <bazuara@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 13:50:02 by bazuara           #+#    #+#             */
/*   Updated: 2024/10/04 20:53:39 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <Array.hpp>

int main()
{
    
    Array<int> a(5);
    Array<int> b(10);
    Array<int> c;
    Array<char> e(10);
    Array<float> f(10);
    Array<double> g(10);
    Array<std::string> h(10);

    for (unsigned int i = 0; i < a.getSize(); i++)
        a[i] = i;
    
    for (unsigned int i = 0; i < b.getSize(); i++)
        b[i] = i + 10;

    for (unsigned int i = 0; i < e.getSize(); i++)
        e[i] = i + 65;

    for (unsigned int i = 0; i < f.getSize(); i++)
        f[i] = i + 42.1;
    
    for (unsigned int i = 0; i < g.getSize(); i++)
        g[i] = i + 42000000;

    for (unsigned int i = 0; i < h.getSize(); i++)
        h[i] = "Hello";

    c = a;
    Array<int> d = Array<int>(b);

    std::cout << "Array a: ";
    for (unsigned int i = 0; i < a.getSize(); i++)
        std::cout << a[i] << " ";
    std::cout << std::endl;

    std::cout << "Array b: ";
    for (unsigned int i = 0; i < b.getSize(); i++)
        std::cout << b[i] << " ";
    std::cout << std::endl;

    std::cout << "Array c: ";
    for (unsigned int i = 0; i < c.getSize(); i++)
        std::cout << c[i] << " ";
    std::cout << std::endl;

    std::cout << "Array d: ";
    for (unsigned int i = 0; i < d.getSize(); i++)
        std::cout << d[i] << " ";
    std::cout << std::endl;

    std::cout << "Array e: ";
    for (unsigned int i = 0; i < e.getSize(); i++)
        std::cout << e[i] << " ";
    std::cout << std::endl;

    std::cout << "Array f: ";
    for (unsigned int i = 0; i < f.getSize(); i++)
        std::cout << f[i] << " ";
    std::cout << std::endl;

    std::cout << "Array g: ";
    for (unsigned int i = 0; i < g.getSize(); i++)
        std::cout << g[i] << " ";
    std::cout << std::endl;

    std::cout << "Array h: ";
    for (unsigned int i = 0; i < h.getSize(); i++)
        std::cout << h[i] << " ";
    std::cout << std::endl;

    std::cout << "Testing out of bounds access" << std::endl;
    std::cout << "Array a: ";
    try
    {
        a[10] = 42;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "Array b: ";
    try
    {
        b[10] = 42;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "Array c: ";
    try
    {
        c[10] = 42;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "Array d: ";
    try
    {
        d[10] = 42;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "Array e: ";
    try
    {
        e[10] = 42;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "Array f: ";
    try
    {
        f[10] = 42;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "Array g: ";
    try
    {
        g[10] = 42;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "Array h: ";
    try
    {
        h[10] = "World";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}