#include <iostream>

using namespace std;

/* Faça um programa que leia 10 números inteiros, armazene-os em um vetor,
solicite um valor de referência inteiro e:
a. Imprima os números do vetor que são maiores que o valor referência;
b. Retorne quantos números armazenados no vetor são menores que o valor
de referência;
c. Retorne quantas vezes o valor de referência aparece no vetor. */

int main()
{
    int vetor[10], ref = 0, menores = 0, iguais = 0;
    
    cout << "Insira o valor de referência: ";
    cin >> ref;
    
    cout << endl << "Insira os valores do Vetor: " << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Digite o valor do Vetor [" << i << "]: ";
        cin >> vetor[i];
        
        if (vetor[i] < ref) {
            menores++;
        } else if (vetor[i] == ref) {
            iguais++;
        }
    }
    
    cout << endl << "Valores maiores que a referência: ";
    for (int i = 0; i < 10; i++) {
        if (vetor[i] > ref) {
            cout << "[" << vetor[i] << "] ";
        }
    }
    
    cout << endl << "Valores menores que a referência: ";
    if (menores > 0) {
        cout << menores << "." << endl;
    } else {
        cout << "Não existem valores menores que " << ref << "." << endl;
    }
    
    cout << "Valores iguais a referência: ";
    if (iguais > 0) {
        cout << iguais << "." << endl;
    } else {
        cout << "Não existem valores iguais a " << ref << "." << endl;
    }
    
    return 0;
}
