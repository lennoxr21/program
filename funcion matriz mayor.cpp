#include <iostream>
using namespace std;
float promedio(int m[3][3]) {
    int suma = 0;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            suma += m[i][j];
        }
    }
    return (float)suma / 9;
}
int main() {
    int matriz[3][3];
    cout << "Ingrese los elementos de la matriz:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> matriz[i][j];
        }
    }
    cout << "El promedio es: " << promedio(matriz);
    return 0;
}