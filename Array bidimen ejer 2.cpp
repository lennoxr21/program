#include <iostream>
using namespace std;
int main() {
    int matriz[3][3];
    cout << "Ingrese los elementos de la matriz:" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> matriz[i][j];
        }
    }
    cout << "Matriz transpuesta:" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << matriz[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}