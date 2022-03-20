/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 13:24:23 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/20 13:40:42 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H_
#define WHATEVER_H_

template <typename T>
void swap(T &a, T &b) {
  T temp = a;
  a = b;
  b = temp;
}

template <typename T>
T &min(T &a, T &b) {
  return a < b ? a : b;
}

template <typename T>
T &max(T &a, T &b) {
  return a > b ? a : b;
}

#endif
