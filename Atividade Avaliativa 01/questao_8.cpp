#include <iostream>

using namespace std;

int main()
{
    /* Faça uma função que recebe por parâmetro um valor inteiro e positivo e retorna o
valor lógico Verdadeiro caso o valor seja primo e Falso em caso contrário. */
    
    int num = 0, contador = 0;
    
    cout << "Escreva um valor: ";
    cin >> num;
    
    for (int i = 1; i <= num; i++) {
        if ((num % i) == 0) { 
            contador++;
        }
  }
    
    if (contador == 2) {
        cout << "É um valor primo.";
    } else {
        cout << "Não é um valor primo.";
    }
    
    return 0;
}
