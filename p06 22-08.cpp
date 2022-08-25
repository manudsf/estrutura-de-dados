#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> valores = {10, 20, 30, 40};

  int soma = 0;
  for (auto n : valores) {
    soma += n;
    cout << n << endl;
  }
  cout << soma << endl;
  return 0;
}