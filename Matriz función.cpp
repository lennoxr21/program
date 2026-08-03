#include <iostream>
using namespace std;
int mayorMatriz(int m[3][3]) {
    int mayor = m[0][0];
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(m[i][j] > mayor) {
                mayor = m[i][j];
            }
        }
    }
    return mayor;
}
int main() {
    int matriz[3][3];
    cout << "Ingrese los elementos de la matriz:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> matriz[i][j];
        }
    }
    cout << "El numero mayor es: " << mayorMatriz(matriz);
    return 0;
}