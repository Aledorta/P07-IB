/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Alejandro Dorta Luis
 * @date 02 Nov 2023
 * @brief Ver si los dos números forma uno harmónico
 *
 */


#include <iostream>
#include <iomanip>
#include <vector>

int main() {
  std::vector<double> vect;
  double numero1;
  double numero2;
  while (std::cin >> numero1 >> numero2) {
    while (numero1 < numero2){
      std::cin >> numero1;
    }
    double total(0);
    ++numero2;
    while (numero2 <= numero1) {
      total = total + 1/numero2;
      ++numero2;
    }
    vect.push_back(total);
  }
  for(int i=0; i < vect.size(); ++i) {
    std::cout << std::fixed << std::setprecision(10) << vect[i] << std::endl;
  }
  return 0;
}