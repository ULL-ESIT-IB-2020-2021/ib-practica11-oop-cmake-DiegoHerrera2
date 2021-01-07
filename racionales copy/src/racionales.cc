/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Diego Herrera Mendoza
 * @date 21.dec.2020
 * @brief Este programa toma una fecha, un número y un fichero y escribe en el
 * fichero las N siguientes fechas siguiendo un orden cronológico
 */

#include <fstream>
#include <iostream>
#include <string>

#include "racional.h"
#include "tools.h"

/** Main function
 *  @param[in] argc Number of command line parameters
 *  @param[in] argv Vector containing (char*) the parameters
 */
int main(int argc, char* argv[]) {
  Usage(argc, argv);

  std::string my_infile{argv[1]};
  std::string my_outfile{argv[2]};
  std::ifstream in_file(my_infile, std::ofstream::in);
  std::ofstream out_file(my_outfile, std::ofstream::out);
  std::string line{};
  while (std::getline(in_file, line)) {
    int space_position{0};
    for (size_t i = 0; i < line.length(); i++) {
      if (line.at(i) == ' ') {
        space_position = i;
        break;
      }
    }
    std::string racional1_string{line.substr(0, (space_position))};
    std::string racional2_string{
        line.substr(space_position + 1, (line.length() - space_position))};
    Racional racional1{Racional::FromString(racional1_string)};
    Racional racional2{Racional::FromString(racional2_string)};

    for (int i = 0; i < 4; i++) {
      Racional result;
      std::string operation;
      switch (i) {
        case 0:
          result = Racional::Add(racional1, racional2);
          operation = "+";
          break;
        case 1:
          result = Racional::Subtract(racional1, racional2);
          operation = "-";
          break;
        case 2:
          result = Racional::Multiply(racional1, racional2);
          operation = "*";
          break;
        case 3:
          result = Racional::Divide(racional1, racional2);
          operation = ":";
          break;
        default:
          break;
      }
      out_file << racional1.ToString() << " " << operation << " "
               << racional2.ToString() << " = " << result.ToString()
               << std::endl;
    }
  }
}
