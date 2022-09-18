#include <iostream>

using namespace std;
/*  Leia uma matriz 5 x 5. Leia também um valor X. O programa deverá fazer uma
busca desse valor na matriz e, ao final, escrever a localização (linha e coluna) ou
uma mensagem de “nao encontrado” */

int main()
{
    int matriz[5][5], X = 0, V = 0, I = 0, J = 0;
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << "Digite o valor da Matriz["<<i<<"]"<<"["<<j<<"]: ";
            cin >> matriz[i][j];
        }
    }
    
    cout << endl << "Escreva o valor: ";
    cin >> X;
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (matriz[i][j] == X) {
             V = matriz[i][j];
             I = i;
             J = j;
            } 
        }
    }
    
    if (X = V) {
        cout << "Localização do valor " << X << " está na posição [" << I << "][" << J << "].";  
    } else {
        cout << "Valor não encontrado.";
    }

    return 0;
}
