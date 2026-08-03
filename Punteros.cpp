#include <iostream>
using namespace std;
int main() {
    int x = 10;
    int *p;
    p = &x;
    cout << "Valor de x: " << x << endl;
    cout << "Direccion de x: " << &x << endl;
    cout << "Valor del puntero: " << p << endl;
    return 0;
}