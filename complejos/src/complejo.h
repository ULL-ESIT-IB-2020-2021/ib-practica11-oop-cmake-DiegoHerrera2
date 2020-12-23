/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Diego Herrera Mendoza
 * @date 21.dic.2020
 * @brief Declaración de la clase Complejo
 *
 */

/** Declarada la clase Complejo
 */
class Complejo {
 public:
  Complejo();
  Complejo(int real, int complex);

  int GetRealPart();
  int GetComplexPart();

  static Complejo Add(Complejo first, Complejo second);
  static Complejo Subtract(Complejo first, Complejo second);
  void print();

 private:
  int real_;
  int complex_;
};
