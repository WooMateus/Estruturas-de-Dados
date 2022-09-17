#include <iostream>

using namespace std;

/* Escreva um programa que leia 10 números inteiros e os armazene em um vetor.
Imprima o vetor, o maior elemento e a posição que ele se encontra. */

int main()
{
    int vetor[10], soma = 0, maior = 0, vetn = 0;

    for (int i = 0; i < 10; i++) {
        cout << "Insira o valor do vetor [" << i << "]: ";
        cin >> vetor[i];
        if (vetor[i] == 0) {
            maior = vetor[i];
            vetn = i;
        } else if (vetor[i] > maior) {
            maior = vetor[i];    
            vetn = i;
        }
    }

    cout << endl << "Valores do vetores: ";
    for (int i = 0; i < 10; i++) {
        cout << "[" << vetor[i] << "] ";
    }
    
    cout << endl << "Maior valor do vetor: [" << maior << "] na posição " << vetn << ".";
    
    return 0;
}
