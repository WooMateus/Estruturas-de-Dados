#include <iostream>

using namespace std;

int main(){
    //Linhas e Colunas
    int matriz[2][3];
    matriz[0][0] = 00;
    matriz[0][1] = 01;
    matriz[0][2] = 02;

    matriz[1][0] = 10;
    matriz[1][1] = 11;
    matriz[1][2] = 12;

    //Linhas
    for(int i=0; i < 2; i++){
        //Colunas
        for(int j=0; j < 3; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}