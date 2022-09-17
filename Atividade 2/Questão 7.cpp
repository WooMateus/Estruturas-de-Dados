#include <iostream>

using namespace std;

/* Faça um programa que leia um vetor de 8 posições e, em seguida, leia também
dois valores X e Y quaisquer correspondentes a duas posições no vetor. Ao final,
seu programa deverá escrever a soma dos valores encontrados nas respectivas
posições X e Y */

int main()
{
    int vetor[8], X = 0, Y = 0, soma = 0;
    
    cout << "Insira os valores do Vetor:" << endl;
    for (int i = 0; i < 8; i++) {
        cout << "Digite o valor do vetor [" << i << "]: ";
        cin >> vetor[i];
    }
    
    cout << endl << "Digite o primeiro vetor para soma: ";
    cin >> X;
    while (X > 8) {
        cout << "Número acima do tamanho do vetor, digite o valor de X: ";
        cin >> X;
    }
    
    cout << "Digite o segundo vetor para soma: ";
    cin >> Y;
    while (Y > 8) {
        cout << "Número acima do tamanho do vetor, digite o valor de Y: ";
        cin >> Y;
    }
    
    soma = vetor[X] + vetor[Y];
    
    cout << endl << "Soma dos valores do vetor [" << X << "] e [" << Y << "]: " << soma;
    
    return 0;
}
