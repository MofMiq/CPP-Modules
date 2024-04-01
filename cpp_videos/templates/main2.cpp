/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 16:00:09 by marirodr          #+#    #+#             */
/*   Updated: 2024/04/01 16:09:27 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>

class List
{
  public:
    List<T>(const T& content)
    {
      //Etc..
    }
    List<T>(const List<T>& list)
    {
      //Etc..
    }
    ~List<T>(void)
    {
      //Etc..
    }
  private:
    T* _content;
    List<T>* _next;
};

int main()
{
  List<int> a(42);
  List<float> b(3.14f);
  List<List <int>> c(a);

  return 0;
}