/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:33:35 by marirodr          #+#    #+#             */
/*   Updated: 2024/04/16 19:11:22 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/BitcoinExchange.hpp"
#include <fstream>

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
  std::ifstream infile(file);
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
  std::ifstream infile(file);
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

bool ft_check_date(const std::string& date)
{
  if (date.length() != 11)
    return false;
  if (date[4] != '-' || date[7] != '-')
    return false;
  for(size_t i = 0; i != date.length() - 1; i++)
  {
    if (!std::isdigit(date[i]) && date[i] != '-')
      return false;
  }

  int year = atoi(date.substr(0, 4).c_str());
  int month = atoi(date.substr(5, 2).c_str());
  int day = atoi(date.substr(8, 2).c_str());

  if (year < 2009 || (year == 2009 && month == 1 && day == 1))
  {
    std::cout << "Error: not data avaliable before 2009-01-01" << std::endl;
    return false;
  }

  if (month < 1 || month > 12)
  {
    std::cout << "Error: invalid date" << std::endl;
    return false;
  }
  if ((month == 4 || month == 6 || month == 9 || month == 11) && (day < 1 || day > 30))
  {
    std::cout << "Error: invalid date" << std::endl;
    return false;
  }
  //comprobar dias 31 y febrero

  std::cout << GREEN << "year: " << year << " month: " << month << " day: " << day << END << std::endl;
  return true;
}

bool  ft_read_input(const std::string& file)
{
  if (!ft_check(file))
    return false;

  std::ifstream input(file);
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
    int i = line.find('|');
    std::string date = line.substr(0, i).c_str();
    if (ft_check_date(date))
    {
      std::cout << "checkeando la fecha " << date << std::endl;
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

      if (!ft_read_input(std::string(argv[1])))
        return 0;
      else
        return 1;
    }
    return 1;
  }
  std::cout << "Error: Usage: ./btc <filename>" << std::endl;
  return 1;
}