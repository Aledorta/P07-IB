/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Alejandro Dorta Luis
 * @date 02 Nov 2023
 * @brief Imprimir los numeros entre dos numeros
 *
 */

#include <iostream>

void Imprimir_numeros(int numero1, int numero2) {
  if (numero1 < numero2) {
    for (int i = numero2; i >= numero1; --i) {
      std::cout << i << std::endl;
    }
  } else {
    for (int i = numero1; i >= numero2; --i) {
      std::cout << i << std::endl;
    }
  }
}

int main() {
  int numero1, numero2;
  std::cin >> numero1 >> numero2;
  Imprimir_numeros(numero1, numero2);
  return 0;  
}