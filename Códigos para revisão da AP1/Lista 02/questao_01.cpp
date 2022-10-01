#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double A, B, PESO_A, PESO_B, SOMA_PESO, SOMA, MEDIA;

    cin >> A;
    cin >> B;

    PESO_A = 3.5;
    PESO_B = 7.5;

    SOMA_PESO = PESO_A + PESO_B;

    SOMA = (A*PESO_A) + (B*PESO_B);
    MEDIA = SOMA / SOMA_PESO;

    cout << fixed << setprecision(5);
    cout << "MEDIA = " << MEDIA << endl;

    return 0;
}