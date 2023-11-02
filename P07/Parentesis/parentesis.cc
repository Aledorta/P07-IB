/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Alejandro Dorta Luis
 * @date 02 Nov 2023
 * @brief Ver si los parentesís estan emparejados 
 *
 */

#include <iostream>
#include <string>

int Parentesis(std::string cadena_de_parentesis) {
  int abrir_cerrar_parentesis(0);
  for (int i = 0; i < cadena_de_parentesis.size(); ++i) {
    char parentesis(0);
    parentesis = cadena_de_parentesis[i];
    if (parentesis == '(') {
      ++abrir_cerrar_parentesis;
    }
    if (parentesis == ')') {
      --abrir_cerrar_parentesis;
    }
    if (abrir_cerrar_parentesis < 0) {
      break;
    }
  }
  return abrir_cerrar_parentesis;
}

int main() {
  std::string cadena_de_parentesis;
  getline(std::cin, cadena_de_parentesis);
  int abrir_cerrar_parentesis = Parentesis(cadena_de_parentesis);
  if (abrir_cerrar_parentesis == 0) {
    std::cout << "yes" << std::endl;
  } else { 
    std::cout << "no" << std::endl;
  }
  return 0;
}