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

/** Clase declarada Racional
 *
 */
class Racional {
 private:
  int numerator_;
  int denominator_;

 public:
  int GetNumerator();
  int GetDenominator();
  Racional(int numerator, int denominator);
  Racional();
  static Racional Add(Racional first, Racional second);
  static Racional Subtract(Racional first, Racional second);
  static Racional Multiply(Racional first, Racional second);
  static Racional Divide(Racional first, Racional second);
  static bool isHigher(Racional first, Racional second);
  static bool isLower(Racional first, Racional second);
  static bool isEqual(Racional first, Racional second);
  static Racional FromString(std::string string);
  std::string ToString();
};
