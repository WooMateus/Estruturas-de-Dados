#include <iostream>

using namespace std;
/*  Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estão na
diagonal secundária */

int main()
{
    int matriz[3][3], soma = 0;
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Digite o valor da Matriz["<<i<<"]"<<"["<<j<<"]: ";
            cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "[" << matriz[i][j] << "] ";
            if (j<=3-i-1) {
				soma += matriz[i][j];
			}
        }
        cout << "\n";
    }

    soma = matriz[0][2] + matriz[1][1] + matriz[2][0];  
    cout << "Soma dos elementos da diagonal secundária: " << soma;

    return 0;
}
