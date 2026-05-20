#include <iostream>
using namespace std;

int main() {
    int num;
    int contador = 0;

    cout << "Ingrese numeros (0 para terminar): " << endl;

    do {
        cin >> num;

        if (num > 0) {
            contador++;
        }

    } while (num != 0);

    cout << "Cantidad de numeros mayores que cero: " << contador << endl;

    return 0;
}