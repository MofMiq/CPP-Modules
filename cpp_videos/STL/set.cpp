#include <iostream>
#include <set>

int main()
{
  std::set<int>  mySet;

  mySet.insert(5);
  mySet.insert(2);
  mySet.insert(8);
  mySet.insert(5); //No se insertará ya que está duplicado

  //Verificar si un elemento esta presente en la lista
  if (mySet.find(8) != mySet.end())
      std::cout << "El elemento 8 está presente en el set.\n";

  //Iterar sobre los elemtos de la lista
  std::cout << "Elementos del set:";
  for (auto it; it != mySet.end(); ++it)
    std::cout << " " << *it;
  std::cout << std::endl;

  return 0;
}
