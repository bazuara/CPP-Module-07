/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <bazuara@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 10:34:14 by bazuara           #+#    #+#             */
/*   Updated: 2024/10/04 10:54:23 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
# define ITER_H

# include <iostream>

template <typename T>
void iter(T *array, size_t size, void (*func)(T const &))
{
    for (size_t i = 0; i < size; i++)
        func(array[i]);
}

template <typename T>
void print(T const &x)
{
    std::cout << x << std::endl;
}

#endif // ITER_H