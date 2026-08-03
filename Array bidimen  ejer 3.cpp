#include <iostream>
using namespace std;
int main() {
    int matriz[3][3];
    int producto = 1;
    cout << "Ingrese los elementos de la matriz:" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> matriz[i][j];
        }
    }
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            producto = producto * matriz[i][j];
        }
    }
    cout << "El producto es: " << producto;
    return 0;
}