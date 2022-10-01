#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    string nome;
    double salario_fixo, total_de_vendas, total_de_vendas_porcentagem;
    double total_a_receber;
    cin >> nome;
    cin >> salario_fixo;
    cin >> total_de_vendas;

    total_de_vendas_porcentagem = total_de_vendas * 0.15;
    total_a_receber = salario_fixo + total_de_vendas_porcentagem;

    cout << fixed << setprecision(2);
    cout << "TOTAL = " << total_a_receber;

    return 0;
}