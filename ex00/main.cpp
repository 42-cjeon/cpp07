/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 13:24:14 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/20 13:40:21 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "whatever.hpp"

int main(void) {
  std::cout << "--- test simple type ---" << std::endl;
  int a = 2, b = 3;
  ::swap(a, b);
  std::cout << "a = " << a << ", b = " << b << std::endl;
  std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
  std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;

  std::cout << "--- test compounded type ---" << std::endl;
  std::string c = "a1", d = "a2";
  ::swap(c, d);
  std::cout << "c = " << c << ", d = " << d << std::endl;
  std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
  std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;

  std::cout << "--- test equal value ---" << std::endl;
  std::string e = "42", f = "42";
  ::swap(e, f);
  std::cout << "e = " << e << ", f = " << f << std::endl;
  std::cout << "[address of e]: " << &e << ", [address of f]: " << &f
            << std::endl;
  std::cout << "min( e, f ) = " << ::min(e, f) << " [address]: " << &min(e, f)
            << std::endl;
  std::cout << "max( e, f ) = " << ::max(e, f) << " [address]: " << &max(e, f)
            << std::endl;
  return 0;
}
