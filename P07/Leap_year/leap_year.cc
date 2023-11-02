/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Alejandro Dorta Luis
 * @date 02 Nov 2023
 * @brief Muestra si un año es bisiesto o no
 *
 */

#include <iostream>

// Función para determinar si un año es bisiesto.
bool esBisiesto(int year) {
  // Si el año no es divisible por 4, no es bisiesto
  if (year % 4 != 0) {
    return false;
    // Si es divisible por 4 pero no por 100, es bisiesto.
  } else if (year % 100 != 0) {
    return true;
    // Si es divisible por 100 pero no por 400, no es bisiesto.
  } else if (year % 400 != 0) {
    return false;
  } else {
    return true;
  }
}

int main(int argc, char* argv[]) {
  if (argc != 2) {
    std::cout << "Uso: " << argv[0] << " <número>" << std::endl;
    return 1;
  }
  // Convierte el argumento de la línea de comandos en un año.
  int year = std::stoi(argv[1]);
  if (esBisiesto(year)) {
    std::cout << year << " es un año bisiesto." << std::endl;
  } else {
    std::cout << year << " no es un año bisiesto." << std::endl;
  }
  return 0;
}
