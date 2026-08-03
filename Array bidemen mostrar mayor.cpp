#include <iostream>
using namespace std;
int main() {
    int matriz[3][3];
    int mayor;
    cout << "Ingrese los elementos de la matriz:" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> matriz[i][j];
        }
    }
    mayor = matriz[0][0];

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(matriz[i][j] > mayor) {
                mayor = matriz[i][j];
            }
        }
    }

    cout << "El numero mayor es: " << mayor;
    return 0;
}