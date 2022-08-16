#include <iostream>

using namespace std;
//tipo void nn retorna nada, mas recebe parametros
void foo(float &a, float b){// com & a passagem não é por valor, é por refrencia
    a *= b; 
    cout << a << endl;
}

int main(){
    float x = 1.5, y = 2.0;
    foo(x, y);
    cout << x << endl;

    return 0;
}