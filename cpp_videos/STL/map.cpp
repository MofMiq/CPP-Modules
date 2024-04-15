#include <iostream>
#include <map>

int main()
{
  std::map<string, int>  people;

  //Asociar valores a claves en el mapa
  people["Juan"] = 32;
  people["Maria"] = 21;
  people["Paco"] = 41;

  //Acceder al valor asociado a la clave
  std::cout << "La edad de Maria es: " << people["Maria"] << std::endl;

  //Iterar sobre los pares clave-valor del map
  std::cout << "Los elementos del mapa:"
  for (auto it; it != people.end(); ++it)
      std::cout << " " << *it;
  std::cout << std:: endl;
  
  return 0;
}
