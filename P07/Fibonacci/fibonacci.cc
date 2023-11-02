/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Alejandro Dorta Luis
 * @date 02 Nov 2023
 * @brief Muestra la secuencia de Fiboonacci hasta un número n de veces
 *
 */

#include <iostream>

int SumaFibonacci(int numero) {
  if (numero <= 1) {
    // Si el número es 0 o 1, devuelve el mismo número.
    return numero;
  }
  // Para números mayores que 1, utiliza recursión para calcular la suma de los dos números anteriores en la secuencia.
  return SumaFibonacci(numero - 1) + SumaFibonacci(numero - 2);
}

int main(int argc, char* argv[]) {
  if (argc != 2) {
    std::cout << "Uso: " << argv[0] << " <número>" << std::endl;
    return 1;
  }
  // Convierte el argumento de la línea de comandos en un número entero.
  int numero = std::stoi(argv[1]);
  // Llama a la función, pero no almacena ni muestra el resultado.
  SumaFibonacci(numero);
  // Muestra la secuencia de Fibonacci hasta el número especificado.
  for (int i = 0; i < numero; i++) {
    std::cout << SumaFibonacci(i) << " ";
  }
  std::cout << std::endl;
  return 0;
}