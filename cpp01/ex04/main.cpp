/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 16:33:05 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/09 16:35:57 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void replace(std::string filename, std::string oldStr, std::string newStr)
{
    std::ifstream infile(filename);
    std::string line;

    (void)oldStr;
    (void)newStr;
    if (infile.is_open() == false)
    {
        std::cout << "Error while opening the infile" << std::endl;
        return ;
    }

    std::ofstream outfile(filename + ".replace");
    if (outfile.is_open() == false)
    {
        std::cout << "Error while opening the outfile" << std::endl;
        return ;
    }

    size_t i;
    while (std::getline(infile, line))
    {
        i = 0;
        while (i < line.length())
        {
            i = line.find(oldStr, i);
            if (i != std::string::npos)
            {
                line = line.substr(0, i) + newStr + line.substr(i + oldStr.length());
                i = 0;
            }
        }
        outfile << line << std::endl;
    }
    
    outfile.close();
    infile.close();
    std::cout << "Archivo copiado" << std::endl;
    return ;
}

int main(int argc, char **argv)
{
    if (argc == 4)
    {
        std::string filename = argv[1];
        std::string oldStr = argv[2];
        std::string newStr = argv[3];
        if (filename.empty() || oldStr.empty() || newStr.empty())
        {
            std::cout << "Error: empty arguments" << std::endl;
            return 1;
        }
        replace(filename, oldStr, newStr);
        return 0;
    }
    std::cout << "Error: usage: ./replace <old_string> <new_string" << std::endl;
    return 1;
}