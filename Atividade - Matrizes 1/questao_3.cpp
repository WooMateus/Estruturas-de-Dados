#include <iostream>

using namespace std;
/* Faça um programa que preencha uma matriz 4 x 4 com o produto do valor da 
linha e da coluna de cada elemento. Em seguida, imprima na tela a matriz */
int main()
{
    int matriz[4][4], num = 0;
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            matriz[i][j] = num;
            cout << "[" << matriz[i][j] << "] ";
            num++;
        }
        cout << "\n";
    }
    return 0;
}
