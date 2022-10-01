#include <iostream>
#include <queue>

int main(){

    queue<int> fila_01, fila_02;

    //Inserindo elementos na fila
    fila_02.push(10);
    fila_02.push(20);
    fila_02.push(30);
    fila_02.push(40);
    fila_02.push(50);
    fila_02.emplace(60); //C++11
    fila_02.emplace(70);

    //Trocando o conteúdo da fila_01 para fila_01
    fila_02.swap(fila_01);
    




    return 0;
}