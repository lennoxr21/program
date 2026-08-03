#include <iostream>
using namespace std;
int main() {
    int matriz[3][3];
    int suma;
    cout << "Ingrese los elementos de la matriz:" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> matriz[i][j];
        }
    }
    for(int i = 0; i < 3; i++) {
        suma = 0;

        for(int j = 0; j < 3; j++) {
            suma = suma + matriz[i][j];
        }
        cout << "Suma de la fila " << i + 1 << ": " << suma << endl;
    }
    return 0;
}