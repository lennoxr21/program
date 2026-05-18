#include <iostream>

using namespace std;

int main() {
    // Fila 1: 6 espacios de margen, 1 asterisco
    cout << "      ";
    for (int i = 0; i < 1; i++) cout << "* ";
    cout << endl;

    // Fila 2: 4 espacios de margen, 3 asteriscos
    cout << "    ";
    for (int i = 0; i < 3; i++) cout << "* ";
    cout << endl;

    // Fila 3: 2 espacios de margen, 5 asteriscos
    cout << "  ";
    for (int i = 0; i < 5; i++) cout << "* ";
    cout << endl;

    // Fila 4: 0 espacios de margen, 7 asteriscos (línea más ancha)
    for (int i = 0; i < 7; i++) cout << "* ";
    cout << endl;

    // Fila 5: 6 espacios de margen, 1 asterisco (centro)
    cout << "      ";
    for (int i = 0; i < 1; i++) cout << "* ";
    cout << endl;

    // Fila 6: 6 espacios de margen, 1 asterisco (centro)
    cout << "      ";
    for (int i = 0; i < 1; i++) cout << "* ";
    cout << endl;

    // Fila 7: 4 espacios de margen, 3 asteriscos (base)
    cout << "    ";
    for (int i = 0; i < 3; i++) cout << "* ";
    cout << endl;

    return 0;
}