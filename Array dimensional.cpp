#include <iostream>
using namespace std;
int main() {
    int matriz[3][3];
    int contador = 0;
    cout << "Ingrese los elementos de la matriz:" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> matriz[i][j];
        }
    }
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(matriz[i][j] % 2 == 0) {
                contador++;
            }
        }
    }
    cout << "Cantidad de numeros pares: " << contador;
    return 0;
}