#include <iostream>

using namespace std;

int main()
{
    int vetor[10];
    
    cout << "Insira os valores: " << endl;
    for (int i=0; i < 10; i++) {
        cout << "Digite o valor do Vetor [" << i << "]: ";
        cin >> vetor[i];
    }
    
    cout << endl << "Valores na ordem inversa: ";
    for (int i=9; i > -1; i--) {
        cout << "[" << vetor[i] << "] ";
    }
    
    return 0;
}
