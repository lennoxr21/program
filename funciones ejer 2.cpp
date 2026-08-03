#include <iostream>
#include <string>
using namespace std;
float calcularSueldo(int horas) {
    return horas * 20;
}
int main() {
    string nombre;
    int horas;
    cout << "Ingrese el nombre del trabajador: ";
    getline(cin, nombre);
    cout << "Ingrese las horas trabajadas: ";
    cin >> horas;
    cout << "\nTrabajador: " << nombre << endl;
    cout << "Sueldo: S/ " << calcularSueldo(horas);
    return 0;
}