/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 14:05:51 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/20 15:01:54 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H_
#define ARRAY_H_

#include <exception>

#include "Swap.hpp"

template <typename T>
class Array {
 public:
  Array(void) : elements_(NULL), size_(0) {}
  Array(unsigned int size) : elements_(new T[size]), size_(size) {}
  ~Array(void) { delete[] elements_; }
  T &operator[](unsigned int i) {
    if (size_ <= i) {
      throw std::out_of_range("Index out of range");
    }
    return elements_[i];
  }
  Array &operator=(const Array &rhs) {
    Array temp(rhs);
    ft::swap(elements_, temp.elements_);
    ft::swap(size_, temp.size_);
    return *this;
  }
  Array(const Array &origin)
      : elements_(new T[origin.size_]), size_(origin.size_) {
    for (unsigned int i = 0; i < size_; ++i) {
      elements_[i] = origin.elements_[i];
    }
  }
  unsigned int size(void) const { return size_; }

 private:
  T *elements_;
  unsigned int size_;
};

#endif
