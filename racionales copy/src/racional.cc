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

#include "racional.h"

#include <iostream>
#include <string>

/** Getters de la clase "Racional"
 *
 *  @return El valor del parámetro de la clase
 */
int Racional::GetNumerator() { return numerator_; }
int Racional::GetDenominator() { return denominator_; }

/** Constructores de la clase "Racional"
 */
Racional::Racional() {
  numerator_ = 1;
  denominator_ = 1;
}
Racional::Racional(int numerator, int denominator) {
  numerator_ = numerator;
  denominator_ = denominator;
}

/** Suma dos números racionales.
 *
 *  @param[in] first Primer número racionales
 *  @param[in] second Segundo número racionales
 *  @return El resultado de la operación
 */
Racional Racional::Add(Racional first, Racional second) {
  int numerator{first.GetNumerator() * second.GetDenominator() +
                second.GetNumerator() * first.GetDenominator()};
  int denominator{first.GetDenominator() * second.GetDenominator()};
  return Racional{numerator, denominator};
}
/** Resta dos números racionales.
 *
 *  @param[in] first Primer número racionales
 *  @param[in] second Segundo número racionales
 *  @return El resultado de la operación
 */
Racional Racional::Subtract(Racional first, Racional second) {
  int numerator{first.GetNumerator() * second.GetDenominator() -
                second.GetNumerator() * first.GetDenominator()};
  int denominator{first.GetDenominator() * second.GetDenominator()};
  return Racional{numerator, denominator};
}
/** Multiplica dos números racionales.
 *
 *  @param[in] first Primer número racionales
 *  @param[in] second Segundo número racionales
 *  @return El resultado de la operación
 */
Racional Racional::Multiply(Racional first, Racional second) {
  int numerator{first.GetNumerator() * second.GetNumerator()};
  int denominator{first.GetDenominator() * second.GetDenominator()};
  return Racional{numerator, denominator};
}
/** Divide dos números racionaless.
 *
 *  @param[in] first Primer número racionales
 *  @param[in] second Segundo número racionales
 *  @return El resultado de la operación
 */
Racional Racional::Divide(Racional first, Racional second) {
  int numerator{first.GetNumerator() * second.GetDenominator()};
  int denominator{first.GetDenominator() * second.GetNumerator()};
  return Racional{numerator, denominator};
}
/** Compara dos números racionales.
 *
 *  @param[in] first Primer número racionales
 *  @param[in] second Segundo número racionales
 *  @return Si el primero es mayor que el segundo
 */
bool Racional::isHigher(Racional first, Racional second) {
  int numerator1{first.GetNumerator() * second.GetDenominator()};
  int numerator2{second.GetNumerator() * first.GetDenominator()};
  return numerator1 > numerator2;
}
/** Compara dos números racionales.
 *
 *  @param[in] first Primer número racionales
 *  @param[in] second Segundo número racionales
 *  @return Si el primero es menor que el segundo
 */
bool Racional::isLower(Racional first, Racional second) {
  int numerator1{first.GetNumerator() * second.GetDenominator()};
  int numerator2{second.GetNumerator() * first.GetDenominator()};
  return numerator1 < numerator2;
}
/** Compara dos números racionales.
 *
 *  @param[in] first Primer número racionales
 *  @param[in] second Segundo número racionales
 *  @return Si los números son iguales
 */
bool Racional::isEqual(Racional first, Racional second) {
  int numerator1{first.GetNumerator() * second.GetDenominator()};
  int numerator2{second.GetNumerator() * first.GetDenominator()};
  return numerator1 == numerator2;
}
/** Transforma una string en un número racional.
 *
 *  @param[in] string Número racional
 *  @return El número racional como objeto
 */
Racional Racional::FromString(std::string string) {
  int slash_position{0};
  for (int i = 0; i < string.length(); i++) {
    if (string.at(i) == '/') {
      slash_position = i;
      break;
    }
  }
  int numerator{std::stoi(string.substr(0, (slash_position)))};
  int denominator{std::stoi(
      string.substr(slash_position + 1, (string.length() - slash_position)))};
  return Racional{numerator, denominator};
}
/** Transforma un número racional en una string.
 *
 *  @return El número racional en forma de string
 */
std::string Racional::ToString() {
  return std::to_string(numerator_) + "/" + std::to_string(denominator_);
}

void Average(Racional first, Racional second) {
  size_t average_numerator{(first.GetNumerator() + second.GetNumerator())/ 2}; 
  size_t average_denominator{(first.GetDenominator() + second.GetDenominator())/ 2};
  std::cout << average_numerator << " " << average_denominator << std:endl;
}