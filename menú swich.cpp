#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int opc;
    
    cout << "Bienvenido al siguiente menú" << endl;
    cout << "1. Cubo de un número" << endl;
    cout << "2. Numero par o impar" << endl;
    cout << "3. Salir" << endl;

    cin >> opc;

    int n1, n2, potencia;

    switch(opc) {
        case 1:
            cout << "Digite el número: ";
            cin >> n1;
            potencia = n1 * n1 * n1;
            cout << "El resultado es: " << potencia << endl;
            break;

        case 2:
            cout << "Digite el número: ";
            cin >> n2;
            if (n2 == 0) {
                cout << "El numero no es par ni impar" << endl;
            }
            else if ((n2 % 2) == 0) {
                cout << "El numero es par" << endl;
            }
            else {
                cout << "El numero es impar" << endl;
            }
            break;

        case 3:
            cout << "Saliendo..." << endl;
            break;

        default:
            cout << "Opcion no valida" << endl;
    }

    return 0;
}