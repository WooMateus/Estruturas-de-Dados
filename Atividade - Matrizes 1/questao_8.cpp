#include <iostream>

using namespace std;
/*  Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estão na
diagonal principal. */

int main()
{
    int matriz[3][3], soma = 0;
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Digite o valor da Matriz["<<i<<"]"<<"["<<j<<"]: ";
            cin >> matriz[i][j];
            if (j == i) {
				soma = soma + matriz[i][j];
			}
        }
    }
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "[" << matriz[i][j] << "] ";
        }
        cout << "\n";
    }
    
    cout << "Soma dos elementos da diagonal principal: " << soma;

    return 0;
}
