#include <iostream>

using namespace std;

int main()
{
    int vetor[6];

    for(int i=0; i < 6; i++) {
        cout << "Digite o valor do Vetor ["<<i<<"]: ";
        cin >> vetor[i];
    }

    cout << endl << "Valores: " << endl;
    
    for(int i=0; i < 6; i++) {
        cout << "[" << vetor[i] << "] ";
    }

    return 0;
}
