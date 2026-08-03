#include <iostream>
using namespace std;
int main() {
    int matriz[3][3];
    int num;
    bool encontrado = false;
    cout << "Ingrese los elementos de la matriz:" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> matriz[i][j];
        }
    }
    cout << "Ingrese el numero a buscar: ";
    cin >> num;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(matriz[i][j] == num) {
                encontrado = true;
            }
        }
    }
    if(encontrado)
        cout << "Numero encontrado";
    else
        cout << "Numero no encontrado";
    return 0;
}