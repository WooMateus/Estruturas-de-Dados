#include <iostream>

using namespace std;

    /*A sequência de Fibonacci é uma sequência de números, onde o número 1 é o primeiro e
segundo termo da ordem e os demais são originados pela soma de seus antecessores.
1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181…*/

int main()
{
    int n = 0, pen = 1, ult = 1, ter = 0;
    
    cout << "Escreva a quantidade de números da sequência de Fibonacci: ";
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        cout << pen << " ";
        ter = ult + pen;
        pen = ult;
        ult = ter;
    }
    
    return 0;
}
