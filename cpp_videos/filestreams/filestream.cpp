#include <iostream>
#include <fstream>
#include <string>

int main(void)
{
    std::ifstream infile("datos.txt");

    if (infile.is_open() == false)
    {
        std::cout << "Error al abrir el archivo de entrada" << std::endl;
        return 1;
    }

    std::ofstream outfile("datos_copia.txt");
    
    if (outfile.is_open() == false)
    {
        std::cout << "Error al abrir el archivo de salida" << std::endl;
        return 1;
    }

    std::string line;

    while (std::getline(infile, line))
    {
        outfile << line << std::endl;
    }

    outfile.close();
    infile.close();

    std::cout << "Archivo copiado" << std::endl;

    return 0;
}