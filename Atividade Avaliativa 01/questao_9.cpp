#include <iostream>

using namespace std;

int main()
{
    /* Faça uma função que recebe um vetor X(20) de reais , por parâmetro, e retorna a
soma dos elementos de X. */
    
    int vetor[20], soma = 0;
    
    cout << "Insira o valor do vetor: " << endl;
    for (int i = 0; i < 20; i++) {
        cout << "Insira o valor do vetor [" << i << "]: ";
        cin >> vetor[i];
        soma = soma + vetor[i];
    }
    
    cout << "A soma de todos os valores de X é: " << soma;
    
    return 0;
}
