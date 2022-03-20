/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 13:56:44 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/20 14:04:55 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

int main(void) {
  int int_arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  iter(int_arr, 10, printElem);
  
  std::string str_arr[5] = {"-", "--", "---", "----", "-----"};
  iter(str_arr, 5, printElem);

  int *pint_arr[3] = {int_arr, int_arr + 1, int_arr + 2};
  iter(pint_arr, 3, printElem);
}
