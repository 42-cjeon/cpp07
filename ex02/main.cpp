/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 14:29:29 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/20 15:03:28 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <exception>
#include <iostream>

#include "Array.hpp"

int main(void) {
  std::cout << "--- test default constructor ---" << std::endl;
  {
    Array<int> a;
    std::cout << "size: " << a.size() << std::endl;
    try {
      std::cout << a[0] << std::endl;  // Cannot access
    } catch (std::exception &e) {
      std::cout << e.what() << std::endl;
    }
  }
  std::cout << "--- test constructor with size ---" << std::endl;
  {
    Array<int> arr(10);

    try {
      for (int i = 0; i < 11; ++i) {
        arr[i] = i;
        std::cout << arr[i] << std::endl;
      }
    } catch (std::exception &e) {
      std::cout << e.what() << std::endl;
    }
  }
  std::cout << "--- test copy constructor ---" << std::endl;
  {
    Array<int> arr(10);
    for (int i = 0; i < 10; ++i) {
      arr[i] = i;
    }
    
    Array<int> new_arr(arr);
    std::cout << "size of origin : " << arr.size() << ", new: " << new_arr.size() << std::endl;
    for (int i = 0; i < 10; ++i) {
      std::cout << "origin: " << arr[i]
                << " new: " << new_arr[i]
                << std::endl;
    }
  }
  std::cout << "--- test assignment operator ---" << std::endl;
  {
    Array<int> arr(10);
    for (int i = 0; i < 10; ++i) {
      arr[i] = i;
    }
    
    Array<int> new_arr(100); // even new_arr is already allocated no leaks allowed
    new_arr = arr;
    std::cout << "size of origin : " << arr.size() << ", new: " << new_arr.size() << std::endl;
    for (int i = 0; i < 10; ++i) {
      std::cout << "origin: " << arr[i]
                << " new: " << new_arr[i]
                << std::endl;
    }
  }
  std::cout << "--- test deep copy (copy constructor) ---" << std::endl;
  {
    Array<int> arr(10);
    for (int i = 0; i < 10; ++i) {
      arr[i] = i;
    }
    
    Array<int> new_arr(arr);
    for (int i = 0; i < 10; ++i) {
      new_arr[i] = i + 10;
    }
    for (int i = 0; i < 10; ++i) {
      std::cout << "origin: " << arr[i]
                << " new: " << new_arr[i]
                << std::endl;
    }
  }
  std::cout << "--- test deep copy (assignment operator) ---" << std::endl;
  {
    Array<int> arr(10);
    for (int i = 0; i < 10; ++i) {
      arr[i] = i;
    }
    
    Array<int> new_arr(100); // even new_arr is already allocated no leaks allowed
    new_arr = arr;
    for (int i = 0; i < 10; ++i) {
      new_arr[i] = i + 10;
    }
    for (int i = 0; i < 10; ++i) {
      std::cout << "origin: " << arr[i]
                << " new: " << new_arr[i]
                << std::endl;
    }
  }
  std::cout << "--- test compounded type ---" << std::endl;
  {
    Array<std::string> arr(10);
    std::string str("");
    for (int i = 0; i < 10; ++i) {
      str += "-";
      arr[i] = str;
    }
    Array<std::string> new_arr(arr);
    for (int i = 0; i < 10; ++i) {
      new_arr[i] = str.substr(0, 10 - i);
    }
    for (int i = 0; i < 10; ++i) {
      std::cout << "origin: " << arr[i]
                << " new: " << new_arr[i]
                << std::endl;
    }
  }
}
