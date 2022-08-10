/*
    Estrutura de Dados I - UPF
    Primeiro exemplo de código C++

    Esse é um comentário de múltiplas linhas
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
  float raio, area;

  cout << "Informe o raio do círculo: ";
  cin >> raio;
  area = M_PI * (raio * raio);
  cout << "A área é " << area << endl;

  return 0;
}
