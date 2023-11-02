/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Alejandro Dorta Luis
 * @date 02 Nov 2023
 * @brief Pasar de binario a decimal
 *
 */

#include <iostream>

// Esta función convierte un número binario en decimal.
int binarioADecimal(int binario) {
  int decimal = 0;
  int base = 1;
  while (binario > 0) {
    int digito = binario % 10;  // Obtiene el último dígito del número binario.
    decimal += digito * base;   // Agrega el dígito al resultado decimal, ponderado por la base.
    base *= 2;                  // Multiplica la base por 2 para avanzar al siguiente dígito binario.
    binario /= 10;             // Elimina el último dígito binario.
  }
  return decimal;
}

int main(int argc, char* argv[]) {
  if (argc != 2) {
    std::cout << "Uso: " << argv[0] << " <número>" << std::endl;
    return 1;
  }
  // Convierte el argumento de la línea de comandos en un número binario.
  int numeroBinario = std::stoi(argv[1]);
  int numeroOriginal = numeroBinario;
  int digito;
  while (numeroBinario > 0) {
    digito = numeroBinario % 10;
    if (digito != 0 && digito != 1) {
      std::cout << "Número binario inválido. Debe contener solo 0 y 1." << std::endl;
      return 1;
    }
        numeroBinario /= 10;
    }

    int decimal = binarioADecimal(numeroOriginal);

    std::cout << "El equivalente decimal es: " << decimal << std::endl;

    return 0;
}
