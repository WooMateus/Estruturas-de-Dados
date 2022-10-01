#include <iostream>
//Incluir a biblioteca vector
#include <vector>
using namespace std;
int main(){
    //Criando um vector
    vector<int> conjunto1;
    vector<int> conjunto2;
    int tamanho = 0;
    //Adicionar itens ao vector
    conjunto1.push_back(1);
    conjunto1.push_back(2);
    conjunto1.push_back(3);
    conjunto1.push_back(4);

    conjunto2.push_back(5);
    conjunto2.push_back(6);
    conjunto2.push_back(7);
    conjunto2.push_back(8);

    //Inserindo valores no início do Vector
    conjunto1.insert(conjunto1.begin(), 100);
    //Inserindo valores na segunda posição
    conjunto1.insert(conjunto1.begin()+1, 120);
    //Inserindo valores no final do Vector
    conjunto1.insert(conjunto1.end(), 150);
    //Removendo um valor
    conjunto1.erase(conjunto1.begin());
    //Impressão do primeiro valor:
    cout << "Primeiro valor Conjunto 1: " << conjunto1.front() << endl;
    //Impressão do item do meio:
    tamanho = conjunto1.size();
    cout << "Item do meio: " << conjunto1.at(tamanho/2) << endl;    
    //Impressão do último valor:
    cout << "Último valor Conjunto 1: " << conjunto1.back() << endl;
    //Tamanho do vector
    cout << "Tamanho do vector Conjunto1 : " << conjunto1.size() << endl;
    cout << "Tamanho do vector Conjunto2 : " << conjunto1.size() << endl;

    cout << "Conjunto 1 antes do Swap: ";
    for(int i=0; i< conjunto1.size(); i++){
        cout << conjunto1[i] << " ";
    }
    cout << endl;
    //Troca de valores
    conjunto1.swap(conjunto2);
    cout << "Conjunto 1 depois do Swap: ";
    for(int i=0; i< conjunto1.size(); i++){
        cout << conjunto1[i] << " ";
    }
    cout << endl;
    cout << "Conjunto 2: ";
    for(int i=0; i < conjunto2.size(); i++){
        cout << conjunto2[i] << " ";
    }
    //Limpar dados do Vector
    while(!conjunto2.empty()){
        conjunto2.pop_back();
    }
    cout << endl;
    cout << "Tamanho vector Conjunto 2: " << conjunto2.size();

    //Limpar dados do Vector
    conjunto1.clear();
    cout << endl;
    cout << "Tamanho vector Conjunto 1: " << conjunto1.size();
    return 0;
}