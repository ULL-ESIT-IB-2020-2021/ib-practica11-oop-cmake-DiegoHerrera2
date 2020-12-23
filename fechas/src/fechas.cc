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

#include "fecha.h"
#include "tools.h"

/** Main function
 *  @param[in] argc Number of command line parameters
 *  @param[in] argv Vector containing (char*) the parameters
 */
int main(int argc, char* argv[]) {
  Usage(argc, argv);

  std::string date_in{argv[1]};
  int number{std::stoi(argv[2])};
  std::string my_file{argv[3]};
  std::ofstream out_file(my_file, std::ofstream::out);

  Fecha date{date_in};
  for (int i = 0; i < number; i++) {
    date.NextDay();
    out_file << date.GetDay() << "/" << date.GetMonth() << "/" << date.GetYear()
             << std::endl;
  }
  return 0;
}
