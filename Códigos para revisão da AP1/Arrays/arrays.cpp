#include <iostream>

using namespace std;

int main()
{
    int somatorio = 0, tamanho_vetor = 0, cont_par=0;
    double media;
    cout << "Digite o tamanho do vetor: ";
    cin >> tamanho_vetor;
    int vetor[tamanho_vetor];
    for(int i=0; i < tamanho_vetor; i++){
        cout << "Digite o valor do Vetor["<<i<<"]: ";
        cin >> vetor[i];
    }
    for(int i=0; i < tamanho_vetor; i++){
        cout << "Valor: " << vetor[i] << " ";
        somatorio = somatorio + vetor[i];
    }
    media = somatorio / tamanho_vetor;
    cout << endl << "Soma: " << somatorio;
    cout << endl << "Media: " << media;
    
    for(int i=0; i<tamanho_vetor; i++){
        if(vetor[i]%2==0){
            cont_par = cont_par + 1;
            cout << endl << "O valor: " << vetor[i] << " é par.";
        }
    }
    cout << endl << "Quantidade de pares: " << cont_par;
    return 0;
}