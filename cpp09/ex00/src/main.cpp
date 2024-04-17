/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunter <hunter@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:33:35 by marirodr          #+#    #+#             */
/*   Updated: 2024/04/17 20:51:45 by hunter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/BitcoinExchange.hpp"
#include <fstream>
#include <cstdlib>
#include <climits>

bool ft_check_number(const std::string& date, size_t i);

bool  ft_check_extension(const std::string& file, const std::string& ext)
{
  if (file.find(ext, file.length() - 4))
    return true;
  else
  {
    std::cout << "Error: file extension is wrong" << std::endl;
    return false;
  }
}

bool ft_check(const std::string& file)
{
  std::ifstream infile(file.c_str());
  if (!infile)
  {
    std::cout << "Error: file not found in current directory" << std::endl;
    return false;
  }
  if (infile.peek() == std::ifstream::traits_type::eof())
  {
    std::cout << "Error: file is empty" << std::endl;
    return false;
  }
  infile.close();
  return true;
}

std::map<std::string, float> ft_copy_database(const std::string& file, char c)
{
  std::ifstream infile(file.c_str());
  std::string   line;
  std::getline(infile, line);

/*  if (line != "date,exchange_rate")
  {
    std::cout << "Error: bad file format" << std::endl;
    return ;
  } */

  std::map<std::string, float> copy;
  while (std::getline(infile, line))
  {
    int pos = line.find(c);
    copy[line.substr(0, pos)] = std::atof(line.substr(pos + 1, line.length()).c_str());
  }

  infile.close();
  return copy;
}

bool ft_check_date(const std::string& line)
{
  size_t i = line.find('|');
  std::string date = line.substr(0, i - 1);
  //std::cout << "date:" << date << "|" << std::endl;
  try
  {
/*   if (i == std::string::npos)
  {
    std::cout << "Character '|' not found" << std::endl;
    return false;
  } */
    if (date.length() != 10)
      throw std::runtime_error("Error: Bad format for date\nMust be like YYYY-MM-DD");
    if (date[4] != '-' || date[7] != '-')
      throw std::runtime_error("Error: Bad format for date\nMust be like YYYY-MM-DD");
    for(size_t i = 0; i != date.length(); i++)
    {
      if (!std::isdigit(date[i]) && date[i] != '-')
        throw std::runtime_error("Error: Bad format for date\nMust be like YYYY-MM-DD");
    }
  }
  catch (std::runtime_error& e)
  {
    std::cerr << RED << e.what() << END << std::endl;
    return false;
  }

  int year = atoi(date.substr(0, 4).c_str());
  int month = atoi(date.substr(5, 2).c_str());
  int day = atoi(date.substr(8, 2).c_str());

  try
  {
    if (year < 2009 || (year == 2009 && month == 1 && day == 1))
      throw std::runtime_error("Error: not data avaliable before 2009-01-01. Your date: ");
    if (year > 2024)
      throw std::runtime_error("Error: not data avaliable before 2009-01-01. Your date: ");
    if (month < 1 || month > 12)
      throw std::runtime_error("Error: bad input => ");
    if ((month == 4 || month == 6 || month == 9 || month == 11) && (day < 1 || day > 30)) //meses 30:
      throw std::runtime_error("Error: bad input => ");
    if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)) //febrero y  los bisiestos
    {
      if (day > 29)
        throw std::runtime_error("Error: bad input => ");
      else if (day > 28)
        throw std::runtime_error("Error: bad input => ");
    }
    else if (day > 31) //meses 31:
        throw std::runtime_error("Error: bad input => ");
  }
  catch (const std::runtime_error& e)
  {
    std::cerr << RED << e.what() << date << END << std::endl;
    return false;
  }
  if (!ft_check_number(line, i))
    return false;
  //std::cout << GREEN << "year: " << year << " month: " << month << " day: " << day << END << std::endl;
  return true;
}

bool ft_check_number(const std::string& line, size_t i)
{
  //std::cout << "ft_check_number: str: " << line << " i:" << i << std::endl;
  try
  {
    if (line.length() < 13)
      throw std::runtime_error("Nunca deberias entrar aqui en verdad ya");
    std::string numberStr = line.substr(i + 2, line.length());
    
    //std::cout << YELLOW << "numberStr:" << numberStr << std::endl; // Checkear esto bien

    for(size_t i = 0; i != numberStr.length(); i++)
    {
      if (!std::isdigit(numberStr[i]) && numberStr[i] != '.')
        throw std::runtime_error("Error: A number can't have not numeric characters");
    }
    float number = atof(numberStr.c_str());
    if (number < 0 || number > 1000)
      throw std::runtime_error("Error: number value must be between 0 and 1000");
    if (number >= INT_MAX)
      throw std::runtime_error("Error: too large a number");
    //std::cout << "number: " << number << std::endl;
  }
  catch (const std::runtime_error& e)
  {
    std::cerr << RED << e.what() << END << std::endl;
    return false;
  }
  return true;
}

bool  ft_read_input(const std::string& file, const BitcoinExchange& database)
{
  if (!ft_check(file))
    return false;

  std::ifstream input(file.c_str());
  std::string   line;
  std::getline(input, line);
  if (line != "date | value")
  {
    std::cout << "Error: bad file format" << std::endl;
    return false;
  }

  while (std::getline(input, line))
  {
    //checkear formato fecha 
      //buscar fecha o mas cercana
      //multipcar value con numero final
      //imprimir en formatoadecuado
    if (ft_check_date(line))
    {
      size_t i = line.find('|');
      std::string date = line.substr(0, i - 1);
      float value = atof(line.substr(i + 2, line.length()).c_str());
      //std::cout << "checkeando la fecha: date: " << date << " value: " << value << std::endl;
      std::cout << date << " => " << value << " = " << database.findValue(date, value) << std::endl;
      
    }
  }
  input.close();
  return true;
}

int main(int argc, char **argv)
{
  if (argc == 2)
  {
    if (ft_check("data.csv"))
    {
      BitcoinExchange data(ft_copy_database("data.csv", ','));
      //std::cout << data << "------" << std::endl;

      if (!ft_read_input(std::string(argv[1]), data))
        return 0;
      else
        return 1;
    }
    return 1;
  }
  std::cout << "Error: Usage: ./btc <filename>" << std::endl;
  return 1;
}