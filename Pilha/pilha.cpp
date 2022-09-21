/* O primeiro valor a entrar é o ultimo a sair
                    | 3 |
                    | 2 |
                    | 1 | << Primeiro a entrar e ultimo a sair */

#include <iostream>
#include <stack> // Biblioteca da Pilha

using namespace std;

int main()
{
    // Criando uma pilha
    stack <string> demacia, noxus;
    // Inserindo elementos na pilha
    demacia.push("Garen");
    demacia.push("Fiora");
    demacia.push("Lux");
    demacia.push("Jarvan");
    
    // Imprimindo o tamanho da pilha - Função "Size";
    cout << "Tamanho da pilha: " << demacia.size() << endl;
    
    // Imprimindo o veículo do topo - Função "Top";
    cout << "Campeão do topo: " << demacia.top() << endl << endl;
    
    // Retirar um elemento da pilha - Função "Pop";
    demacia.pop();
    cout << "Tamanho da pilha atual: " << demacia.size() << endl;
    cout << "Campeão do topo atual: " << demacia.top() << endl << endl;

    // Adicionando um elemento na pilha - Função "Push";
    demacia.push("Galio");
    cout << "Tamanho da pilha atual: " << demacia.size() << endl;
    cout << "Campeão do topo atual: " << demacia.top() << endl << endl;
    
    // Verificando se a pilha está vazia - Função "Empty";
    if (demacia.empty()) {
        cout << "A pilha Demacia não possui valores." << endl << endl;
    } else {
        cout << "A pilha Demacia possui valores." << endl << endl;
    }
    if (noxus.empty()) {
        cout << "A pilha Noxus não possui valores." << endl << endl;
    } else {
        cout << "A pilha Noxus possui valores." << endl << endl;
    }
    
    // Imprimindo os elementos da pilha enquanto ela não estiver vazia.
    while(!demacia.empty()) { // ! é o operador de negação. Ele retorna o contrário da resolução da operação o qual ele precede.
        cout << demacia.top() << endl;
        demacia.pop();
    }
    if (demacia.empty()) {
        cout << "A pilha Demacia não possui valores." << endl;
    } else {
        cout << "A pilha Demacia possui valores." << endl;
    }
    
    cout << "Tamanho da pilha atual: " << demacia.size() << endl;
    cout << "Campeão do topo atual: " << demacia.top() << endl << endl;
  
    return 0;
}
