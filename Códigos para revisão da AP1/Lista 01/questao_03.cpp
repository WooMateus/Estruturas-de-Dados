#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double n = 3.14159;
    double area, raio;

    cin >> raio;
    area = n*(raio*raio);
    cout << fixed << setprecision(4);
    cout << area << endl;

    return 0;
}