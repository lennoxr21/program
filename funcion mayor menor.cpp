#include <iostream>
using namespace std;
int mayor(int a, int b) {
    if(a > b)
        return a;
    else
        return b;
}
int main() {
    int x, y;
    cout << "Ingrese dos numeros: ";
    cin >> x >> y;
    cout << "El mayor es: " << mayor(x, y);
    return 0;
}