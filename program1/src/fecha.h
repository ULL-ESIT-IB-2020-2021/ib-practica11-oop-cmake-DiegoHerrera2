/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Diego Herrera Mendoza
 * @date 21.dec.2020
 * @brief Este archivo declara las clases que se utilizarán en el programa
 *
 */

#include <string>

/** Clase Fecha
 *
 */
class Fecha {
  private:
    int day_;
    int month_;
    int year_;
  public:
    int GetDay();
    int GetMonth();
    int GetYear();
    Fecha(std::string date);
    bool isLeapYear();
    void NextDay();
    
};

