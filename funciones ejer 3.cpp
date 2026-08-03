#include <iostream>
#include <string>
using namespace std;
float calcularPago(int horas) {
    float total = horas * 5;
    if(horas > 8) {
        total = total - 10;
    }
    return total;
}
int main() {
    string nombre;
    int horas;
    cout << "Ingrese el nombre del cliente: ";
    getline(cin, nombre);
    cout << "Ingrese las horas de permanencia: ";
    cin >> horas;
    cout << "\nCliente: " << nombre << endl;
    cout << "Total a pagar: S/ " << calcularPago(horas);
    return 0;
}