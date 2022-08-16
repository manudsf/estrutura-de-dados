//problema beecrowd 1009
#include <iostream>
#include <iomanip> //formatação da entrada e saída
#include <string> //quando se usa string num código, incluir
using namespace std;

int main (){
    //criação de variáveis
    string nome;
    double fixo, vendas;

    //variaveis que vao entrar
    cin >> nome >> fixo >> vendas; //o formato do código não influencia na execução
    
    //criaçã da variavel do calculo
    double total = fixo + (vendas * 0.15);

    //"resultado" , o que vai sair
    cout << "TOTAL = R$ " 
         << fixed //seta para quantidade fixa de casas decimais
         << setprecision(2) //formata para quantidade de casas (no caso, duas)
         << total 
         << endl; // usar sempre pra finalizar a saida

    return 0;
}