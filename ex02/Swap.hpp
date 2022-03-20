/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Swap.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 13:24:23 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/20 14:34:23 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SWAP_H_
#define SWAP_H_

namespace ft {
template <typename T>
void swap(T &a, T &b) {
  T temp = a;
  a = b;
  b = temp;
}
}  // namespace ft

#endif
