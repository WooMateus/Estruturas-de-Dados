#include <iostream>

using namespace std;
/* Leia uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela possui. */
int main()
{
    int matriz[4][4], soma = 0;
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "Digite o valor da Matriz["<<i<<"]"<<"["<<j<<"]: ";
            cin >> matriz[i][j];
            if (matriz[i][j] > 10) {
                soma++;
            }
        }
    }

    if (soma != 0) {
        cout << endl << "Valores maiores que 10: " << soma;
    } else {
        cout << endl << "Não possui valores acima de 10.";
    }
    
    return 0;
}
