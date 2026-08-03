#include <iostream>
using namespace std;
int sumar(int a, int b) {
    return a + b;
}
int main() {
    int resultado;
    resultado = sumar(8, 5);
    cout << "La suma es: " << resultado;
    return 0;
}