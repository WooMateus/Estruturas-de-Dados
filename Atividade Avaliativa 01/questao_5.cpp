#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    /* Escreva um programa que leia 3 notas de um aluno e a média das notas dos exercícios
    realizados por ele. Calcular a média de aproveitamento, usando a fórmula: MA = (N1
    + N2*2 + N3*3 + ME)/7. A partir da média, informar o conceito de acordo com a
    tabela: */
    
    double N1, N2, N3, ME = 0, MA = 0;
    
    cout << "Escreva os valores da nota: " << endl;
        cout << "Nota 1: ";
            cin >> N1;
        cout << "Nota 2: ";
            cin >> N2;
        cout << "Nota 3: ";
            cin >> N3;
    
    ME = (N1 + N2 + N3) / 3;
    MA = (N1 + N2*2 + N3*3 + ME) / 7;
    
    cout << fixed << setprecision(2);
    cout << "Sua Média de Aproveitamento é: " << MA << " e sua nota é: ";
    
    if (MA <= 4.9) {
        cout << "D";
    } else if (MA <= 6.9) {
        cout << "C";
    } else if (MA <= 8.9) {
        cout << "B";
    } else {
        cout << "A";
    }
    
    return 0;
}
