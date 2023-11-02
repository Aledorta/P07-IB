/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Alejandro Dorta Luis
 * @date 02 Nov 2023
 * @brief Pasar de decimal a binario
 *
 */

#include <iostream>

// Función que convierte un número decimal en binario.
int decimalABinario(int decimal) {
  int binario = 0;
  int base = 1;
  while (decimal > 0) {
    int residuo = decimal % 2;  // Calcula el residuo al dividir por 2.
    binario += residuo * base;   // Agrega el residuo al resultado binario, ponderado por la base.
    decimal /= 2;               // Divide el número decimal por 2 para avanzar al siguiente dígito binario.
    base *= 10;                 // Incrementa la base multiplicando por 10.
  }
  return binario;
}

int main(int argc, char* argv[]) {
  if (argc != 2) {
    std::cout << "Uso: " << argv[0] << " <número>" << std::endl;
    return 1;
  }
  // Convierte el argumento de la línea de comandos en un número decimal.
  int numeroDecimal = std::stoi(argv[1]);
  if (numeroDecimal < 0) {
    std::cout << "Número decimal no puede ser negativo." << std::endl;
    return 1;
  }
  int binario = decimalABinario(numeroDecimal);
  std::cout << "El equivalente binario es: " << binario << std::endl;
  return 0;
}