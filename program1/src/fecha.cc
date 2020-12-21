/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Diego Herrera Mendoza
 * @date 21.dec.2020
 * @brief En este archivo se guardan las definiciones de las clases
 *
 */

#include "fecha.h"
#include <string>
#include <iostream>


/** Getters de la clase "Fecha"
 *
 *  @return El valor del parámetro de la clase
 */
int Fecha::GetDay(){
  return day_;
}
int Fecha::GetMonth(){
  return month_;
}
int Fecha::GetYear(){
  return year_;
}


/** Devuelve si el año introducido es bisiesto o no en forma de bool
 *
 *  @param[in] year_. Se suman los términos pares menores que kLimit
 */
bool Fecha::isLeapYear() {
  if ((year_ % 4 == 0 && year_ % 100 != 0) || year_ % 400 == 0)
    return true;
  else
    return false;
}


/** Avanza un día en a fecha de la clase en la que se utilice
 *
 */
void Fecha::NextDay() {
  day_++;
  // Filtro Febrero + bisiesto
  if (isLeapYear() && month_ == 2 && day_ > 29) {
    day_ = 1;
    month_++;
  }
  // Filtro Febrero sin bisiesto
  else if ((!isLeapYear()) && month_ == 2 && day_ > 28) {
    day_ = 1;
    month_++;
  }
  // Filtro demás días
  if (day_ > 30 && month_ == 4 || day_ > 30 && month_ == 6 ||
      day_ > 30 && month_ == 9 || day_ > 30 && month_ == 11) {
    day_ = 1;
    month_++;
  } else if (day_ > 31) {
    day_ = 1;
    month_++;
    if (month_ > 12) {
      year_++;
      month_ = 1;
    }
  }
}
/** Constructor de la clase
 *
 *  @param[in] date. Fecha en forma de string
 */
Fecha::Fecha(std::string date) {
  std::string day_string{date.substr(0, 2)};
  std::string month_string{date.substr(3, 2)};
  std::string year_string{date.substr(6, 4)};

  day_ = std::stoi(day_string);
  month_ = std::stoi(month_string);
  year_ = std::stoi(year_string);
}