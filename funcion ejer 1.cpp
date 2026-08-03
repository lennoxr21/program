#include <iostream>
using namespace std;
bool esPrimo(int n) {
    if(n <= 1)
        return false;
    for(int i = 2; i < n; i++) {
        if(n % i == 0)
            return false;
    }
    return true;
}
int main() {
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;
    if(esPrimo(num))
        cout << "El numero es primo.";
    else
        cout << "El numero no es primo.";
    return 0;
}