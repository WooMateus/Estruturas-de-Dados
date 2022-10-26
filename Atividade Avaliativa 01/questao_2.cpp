#include <iostream>

using namespace std;

int main()
{
    int v, multi = 0;
    
    cout << "Digite o valor para multiplicar: ";
    cin >> v;
    
    for(int i = 1; i < 11; i++) {
        multi = v * i;
        cout << "[" << v << "] x [" << i << "] = [" << multi << "]"<< endl;
    }

    return 0;
}
