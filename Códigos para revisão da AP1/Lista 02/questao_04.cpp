#include <iostream>
using namespace std;

int main(){

    double n; 
    int contador=0;
    for(int i = 0; i < 6; i++){
        cin >> n;
        if(n > 0){
            contador = contador + 1;
        }
    }

    cout << contador << " valores positivos";

    return 0;
}