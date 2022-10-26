#include <iostream>

using namespace std;

int main()
{
    /*  Faça uma função que receba um valor inteiro e positivo e calcule o seu fatorial. */
    
    int num = 0, fatorial = 1;
    
    cout << "Escreva um valor para calcular seu fatorial: ";
    cin >> num;

    if (num == 0) {
        cout << num;
    } else {
        for (int i = 1; i <= num; i++) {
            fatorial = fatorial * i;
        }   
        cout << fatorial;
    }
    
    return 0;
}
