#include <iostream>

using namespace std;

int main()
{
    double v, divi = 0;
    
    cout << "Digite o valor para dividir: ";
    cin >> v;
    
    for(int i = 1; i < 11; i++) {
        divi = v / i;
        cout << "[" << v << "] / [" << i << "] = [" << divi << "]"<< endl;
    }

    return 0;
}
