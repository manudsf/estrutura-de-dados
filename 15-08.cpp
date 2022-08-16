//problema beecrowd 1009
#include <iostream>
#include <iomanip> //formatação da entrada e saída
#include <string> //quando se usa string num código, incluir
using namespace std;

int main (){
    string nome, email;
//entrada
    cout << "informe seu nome: ";
    getline(cin, nome); //ação, variavel
    //cin >> nome; //nao utiliza quando a string tem espaço em branco
    cout << "informe seu email: ";
    getline(cin, email);
    //cin >> email;
//resultado
     cout << "nome: " << nome << endl
          << "email: " << email << endl; 

    return 0;
}