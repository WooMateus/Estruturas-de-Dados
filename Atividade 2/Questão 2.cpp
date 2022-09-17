#include <iostream>

using namespace std;

int main()
{
    int vetor[5], soma = 0;

    for(int i=0; i < 5; i++) {
        cout << "Digite o valor do Vetor ["<<i<<"]: ";
        cin >> vetor[i];
        soma = soma + vetor[i];
    }

    cout << endl << "Soma dos valores: " << soma;

    return 0;
}
