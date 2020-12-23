/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Diego Herrera Mendoza
 * @date 21.dic.2020
 * @brief Definición de las funciones y la clase Complejo
 *
 */

#include <iostream>

#include "complejo.h"    

/** Crea un nuevo número complejo dadas su parte real e imaginaria.
 *
 *  @param[in] real Parte real
 *  @param[in] complex Parte imaginaria
 *  @return El número complejo creado
 */
Complejo::Complejo(int real, int complex)
{
  real_ = real;
  complex_ = complex;
}

/** Crea un nuevo número complejo igual a 0.
 *
 *  @return El número complejo creado
 */
Complejo::Complejo()
{
  real_ = 0;
  complex_ = 0;
}

/** Obtiene la parte real del número complejo.
 *
 *  @return Parte real del número complejo
 */
int Complejo::GetRealPart() {
  return real_;
}

/** Obtiene la parte imaginaria del número complejo.
 *
 *  @return Parte imaginaria del número complejo
 */
int Complejo::GetComplexPart() {
  return complex_;
}

/** Imprime el número complejo en pantalla en su forma binómica.
 */
void Complejo::print() {
  std::cout << GetRealPart() << (GetComplexPart() > 0 ? "+" : "") << GetComplexPart() << "i" << std::endl;
}

/** Suma dos números complejos.
 *
 *  @param[in] first Primer número complejo
 *  @param[in] second Segundo número complejo
 *  @return El resultado de la operación
 */
Complejo Complejo::Add(Complejo first, Complejo second) {
  int complex_sum{first.GetComplexPart() + second.GetComplexPart()};
  int real_sum{first.GetRealPart() + second.GetRealPart()};

  Complejo number{real_sum, complex_sum};
  return number;
}

/** Resta dos números complejos.
 *
 *  @param[in] first Primer número complejo
 *  @param[in] second Segundo número complejo
 *  @return El resultado de la operación
 */
Complejo Complejo::Subtract(Complejo first, Complejo second) {
  int complex_sub{first.GetComplexPart() - second.GetComplexPart()};
  int real_sub{first.GetRealPart() - second.GetRealPart()};

  Complejo number{real_sub, complex_sub};
  return number;
}