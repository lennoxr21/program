#include <iostream>

using namespace std;

int main() {
    // Fila 1: 5 asteriscos (sin espacios al inicio)
    for (int i = 0; i < 5; i++) {
        cout << "* ";
    }
    cout << endl;

    // Fila 2: 1 espacio de margen, 3 asteriscos
    cout << "  "; // Dos espacios para alinear con el formato anterior
    for (int i = 0; i < 3; i++) {
        cout << "* ";
    }
    cout << endl;

    // Fila 3: 2 espacios de margen, 1 asterisco
    cout << "    "; 
    for (int i = 0; i < 1; i++) {
        cout << "* ";
    }
    cout << endl;

    // Fila 4: 2 espacios de margen, 1 asterisco (igual a la fila 3)
    cout << "    ";
    for (int i = 0; i < 1; i++) {
        cout << "* ";
    }
    cout << endl;

    // Fila 5: 1 espacio de margen, 3 asteriscos (igual a la fila 2)
    cout << "  ";
    for (int i = 0; i < 3; i++) {
        cout << "* ";
    }
    cout << endl;

    // Fila 6: 5 asteriscos (igual a la fila 1)
    for (int i = 0; i < 5; i++) {
        cout << "* ";
    }
    cout << endl;

    return 0;
}