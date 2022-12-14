#include <iostream>

using namespace std;

/* Altere o programa anterior para calcular e apresentar a média dos valores
entrados e aqueles que são maiores e menores que a média.Faça um programa
que leia 10 valores reais e os apresente na ordem inversa entrada. */

int main()
{
    int vetor[10];
    double media = 0, soma = 0;
    
    cout << "Insira os valores: " << endl;
    for (int i=0; i < 10; i++) {
        cout << "Digite o valor do Vetor [" << i << "]: ";
        cin >> vetor[i];
        soma = soma + vetor[i];
    }
    
    cout << endl << "Valores: ";
    for (int i=0; i < 10; i++) {
        cout << "[" << vetor[i] << "] ";
    }
    
    cout << endl << "Valores na ordem inversa: ";
    for (int i=9; i > -1; i--) {
        cout << "[" << vetor[i] << "] ";
    }
    
    media = soma / 10;
    cout << endl << "Média: " << media << endl;
    
    cout << "Valores acima da média: ";
    for (int i = 0; i <10; i++) {
        if (vetor[i] > media) {
            cout << "[" << vetor[i] << "] ";
        }
    }
    
    cout << endl << "Valores abaixo da média: ";
    for (int i = 0; i < 10; i++) {
        if (vetor[i] < media) {
            cout << "[" << vetor[i] << "] ";
        }
    }
    
    return 0;
}
