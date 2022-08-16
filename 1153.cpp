//1153 beecrowd

#include <iostream>
 
using namespace std;

//criação de uma função que vai calcular o fat
int fatorial(int n){

    return (n == 0) ?  1 : n * fatorial(n-1);
}

// ? = if, se
// : = se não

int main() {
    int n;
    cin >> n;
    cout << fatorial(n) << endl;
    return 0;
}