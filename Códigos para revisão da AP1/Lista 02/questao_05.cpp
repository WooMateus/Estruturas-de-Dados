#include <iostream>
using namespace std;

int main(){

    int n;
    int cont_par = 0, cont_impar = 0, cont_positivo = 0, cont_negativo = 0;
    for(int i = 0; i < 5; i++){
        cin >> n;
        if(n%2==0){
            cont_par = cont_par + 1;
        }else{
            cont_impar = cont_impar + 1;
        }
        if(n > 0){
            cont_positivo = cont_positivo + 1;
        }else if(n < 0){
            cont_negativo = cont_negativo + 1;
        }
    }

    cout << cont_par << " valor(es) par(es)" << endl;
    cout << cont_impar << " valor(es) impar(es)" << endl;
    cout << cont_positivo << " valore(es) positivo(s)" << endl;
    cout << cont_negativo << " valor(es) negativo(s)" << endl;

    return 0;
}