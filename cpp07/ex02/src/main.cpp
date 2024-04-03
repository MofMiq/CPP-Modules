/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 16:38:48 by marirodr          #+#    #+#             */
/*   Updated: 2024/04/03 19:09:47 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Array.hpp"

class Person{
  public:
    std::string _name;
    int _age;
};

int main()
{
  Array<int> obj(6);
  int copy[6] = {7, 5, -6, 3, 0, -11};

  std::cout << obj.size() << std::endl;

  for (unsigned int i = 0; i < obj.size(); i++)
  {
    obj[i] = copy[i];
    std::cout << "copy[" << i << "]: " << copy[i] << std::endl;
  }
  
  std::cout << obj;

  Array<int> obj2(obj);

  std::cout << obj2;

  Array<int> obj3;
  
  std::cout << obj3;

  obj3 = obj;
  
  std::cout << obj3;
  
  try
  {
    std::cout << obj[-1];
  }
  catch (const std::out_of_range& e)
  {
    std::cerr << "Caught: " << e.what();
  }

  Array<Person> personArray(5);
  for (unsigned int i = 0; i < personArray.size(); i++)
  {
    personArray[i]._name = "Person " + std::to_string(i);
    personArray[i]._age = i;
  }
  for (unsigned int i = 0; i < personArray.size(); i++)
    std::cout << personArray[i]._name << ", " << personArray[i]._age << std::endl;


  /* Array<float> obj(6);
  float copy[6] = {7.1f, 5.09f, -6.0f, 3.56f, 0.9f, -11.3f};

  std::cout << obj.size() << std::endl;

  for (unsigned int i = 0; i < obj.size(); i++)
  {
    obj[i] = copy[i];
    std::cout << "copy[" << i << "]: " << copy[i] << std::endl;
  }
  
  std::cout << obj;

  Array<float> obj2(obj);

  std::cout << obj2;

  Array<float> obj3;
  
  std::cout << obj3;

  obj3 = obj;
  
  std::cout << obj3; */

  /* Array<char> obj(6);
  char copy[6] = {'a', '+', 'o', '8', '¡', 'm'};

  std::cout << obj.size() << std::endl;

  for (unsigned int i = 0; i < obj.size(); i++)
  {
    obj[i] = copy[i];
    std::cout << "copy[" << i << "]: " << copy[i] << std::endl;
  }
  
  std::cout << obj;

  Array<char> obj2(obj);

  std::cout << obj2;

  Array<char> obj3;
  
  std::cout << obj3;

  obj3 = obj;
  
  std::cout << obj3; */
  
  return 0;
}