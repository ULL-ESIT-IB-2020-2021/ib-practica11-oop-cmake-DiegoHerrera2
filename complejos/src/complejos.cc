/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Diego Herrera Mendoza
 * @date 21.dic.2020
 * @brief Programa que opera con números complejos
 *
 */

#include <iostream>   
#include "complejo.h"    

/** Main function
 */
int main () {
  Complejo complejo1{4, 5}, complejo2{7, -8};
  Complejo resultado;
  resultado = Complejo::Add(complejo1, complejo2);
  resultado.print();
  resultado = Complejo::Subtract(complejo1, complejo2);
  resultado.print();

  return 0;
}
