/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Alejandro Dorta Luis
 * @date 02 Nov 2023
 * @brief Suma los dígitos de un número
 *
 */

#include <iostream>

int Suma_digitos(std::string numeroStr) {
  int suma = 0;
  // Itera a través de cada carácter en la cadena.
  for (char c : numeroStr) {
    // Verifica si el carácter es un dígito.
    if (isdigit(c)) {
      // Convierte el carácter en un entero restando el valor del carácter '0'.
      int digito = c - '0'; // Convierte el carácter en un entero
      suma += digito; // Agrega el dígito a la suma total.
    }
  }
  return suma;
}

int main(int argc, char* argv[]) {
  if (argc != 2) {
    std::cout << "Uso: " << argv[0] << " <número>" << std::endl;
    return 1;
  }
  // Obtiene el argumento de la línea de comandos como una cadena.
  std::string numeroStr = argv[1];
  int suma;
  suma = Suma_digitos(numeroStr);
  std::cout << suma << std::endl;
}
    