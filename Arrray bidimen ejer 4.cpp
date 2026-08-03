#include <iostream>
using namespace std;
int main() {
    int ventas[3][5];
    int suma;
    int mayor = 0;
    int productoMayor = 0;
    cout << "Ingrese las ventas de los 3 productos durante los 5 dias:\n";
    for(int i = 0; i < 3; i++) {
        cout << "Producto " << i + 1 << ":\n";
        for(int j = 0; j < 5; j++) {
            cin >> ventas[i][j];
        }
    }
    cout << "\nVentas totales por producto:\n";
    for(int i = 0; i < 3; i++) {
        suma = 0;
        for(int j = 0; j < 5; j++) {
            suma += ventas[i][j];
        }
        cout << "Producto " << i + 1 << ": " << suma << endl;
        if(suma > mayor) {
            mayor = suma;
            productoMayor = i;
        }
    }
    cout << "\nEl producto con mayor venta fue el producto "
         << productoMayor + 1 << " con " << mayor << " ventas.";
    return 0;
}