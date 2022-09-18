#include <iostream>

using namespace std;
/*  Leia uma matriz 4 x 4, imprima a matriz e retorne a localização (linha e a
coluna) do maior valor. */

int main()
{
    int matriz[4][4], posX = 0, posY = 0, val = 0;
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "Digite o valor da Matriz["<<i<<"]"<<"["<<j<<"]: ";
            cin >> matriz[i][j];
            if (matriz[i][j] > val) {
                posX = i;
                posY = j;
                val = matriz[i][j]; 
            }
        }
    }
    
    for(int i=0; i < 4; i++){
        for(int j=0; j < 4; j++){
            cout << "["<< matriz[i][j] <<"]" << "\t";
        }
        cout << endl;
    }
    
    cout << "Maior valor da matriz: " << val << " na posição [" << posX << "][" << posY << "].";
    
    return 0;
}
