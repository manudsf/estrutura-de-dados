#include "funcoes.cpp"

const int N = 100000;

int main() {
  int vet[N];

  for (int i = 0; i < N; i++)
    std::cin >> vet[i];

  insertionsort(vet, N);

  for (int i = 0; i < N; i++)
    std::cout << vet[i] << std::endl;
}
