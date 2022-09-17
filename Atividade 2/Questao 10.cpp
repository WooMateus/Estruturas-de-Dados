#include <iostream>

using namespace std;

/* Faça um programa que preencha um vetor com 10 números reais, calcule e
mostre a quantidade de números negativos e a soma dos números positivos desse
vetor */

int main()
{
    float vetor[10], soma = 0;
    int negativos = 0;
    
    cout << "Digite os valores do vetor: " << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Digite o valor do vetor [" << i << "]: ";
        cin >> vetor[i];
        
    if (vetor[i] < 0) {
        negativos++;
        } else if (vetor[i] > 0) {
            soma = soma + vetor[i];
        } 
    }
    
    cout << endl << "Valores do vetor: ";    
    for (int i = 0; i < 10; i++) {
        cout << "[" << vetor[i] << "] ";
    }
    
    cout << endl << "Quantidade de números negativos: " << negativos << endl;
    cout << "Soma dos números positivos: " << soma;
    
    return 0;
}
