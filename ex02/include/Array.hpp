/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <bazuara@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 20:20:30 by bazuara           #+#    #+#             */
/*   Updated: 2024/10/04 20:29:26 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP


#include <iostream>

template <class T> class Array
{
private:
    T *array;
    unsigned int size;
public:
    Array();
    Array(unsigned int n);
    Array(const Array &other);
    ~Array();
    Array &operator=(const Array &other);
    T &operator[](unsigned int index);
    unsigned int getSize() const;
};

template <class T> Array<T>::Array() {
    this->array = new T[0];
    this->size = 0;
}

template <class T> Array<T>::Array(unsigned int n) {
    this->array = new T[n];
    this->size = n;
}

template <class T> Array<T>::Array(const Array &other) {
    this->array = new T[other.size];
    this->size = other.size;
    for (unsigned int i = 0; i < other.size; i++)
        this->array[i] = other.array[i];
}

template <class T> Array<T>::~Array() {
    delete[] this->array;
}

template <class T> Array<T> &Array<T>::operator=(const Array &other) {
    if (this == &other)
        return *this;
    delete[] this->array;
    this->array = new T[other.size];
    this->size = other.size;
    for (unsigned int i = 0; i < other.size; i++)
        this->array[i] = other.array[i];
    return *this;
}

template <class T> T &Array<T>::operator[](unsigned int index) {
    if (index >= this->size)
        throw std::out_of_range("Index out of range");
    return this->array[index];
}

template <class T> unsigned int Array<T>::getSize() const {
    return this->size;
}

#endif // ARRAY_HPP