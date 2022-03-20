/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 13:45:03 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/20 14:03:25 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H_
#define ITER_H_

#include <cstddef>
#include <iostream>

template <typename T>
void printElem(T &elem) {
  std::cout << elem << std::endl;
}

template <typename T>
void iter(T arr[], std::size_t length, void (*func)(T &elem)) {
  for (std::size_t i = 0; i < length; ++i) {
    func(arr[i]);
  }
}

#endif
