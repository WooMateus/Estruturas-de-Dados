#include <iostream>

using namespace std;
/* Declare uma matriz 5 x 5. Preencha com 1 a diagonal principal e com 0 os demais elementos. Escreva ao final a matriz obtida */
int main()
{
    int matriz[5][5];
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            matriz[i][j] = 0;
            if (i == j) {
                matriz[i][j] = 1;
            }
        }
    }
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << "[" << matriz[i][j] << "] ";
        }
        cout << "\n";
    }
    
    return 0;
}
