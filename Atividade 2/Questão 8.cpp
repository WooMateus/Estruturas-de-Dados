#include <iostream>

using namespace std;

/* Leia um vetor de 10 posições. Contar e escrever quantos valores pares ele
possui. */

int main()
{
    int vetor[10], soma = 0;
    
    cout << "Digite os valores do vetor: " << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Digite o valor do vetor [" << i << "]: ";
        cin >> vetor[i];
        
        if (vetor[i]%2 == 0) {
            soma++;
        }
    }
    
    cout << "Valores do vetor: ";    
    for (int i = 0; i < 10; i++) {
        cout << "[" << vetor[i] << "] ";
    }
    
    cout << endl << "Quantidade de valores pares: " << soma; 
    
    return 0;
}
