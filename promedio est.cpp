#include <iostream>
using namespace std;

struct Estudiante {
    string nombre;
    float nota1, nota2, nota3;
    float promedio;
};

int main() {
    int n;

    cout << "Ingrese la cantidad de estudiantes: ";
    cin >> n;

    Estudiante estudiantes[n];

    for (int i = 0; i < n; i++) {
        cout << "\nEstudiante " << i + 1 << endl;
        cout << "Nombre: ";
        cin >> estudiantes[i].nombre;

        cout << "Nota 1: ";
        cin >> estudiantes[i].nota1;

        cout << "Nota 2: ";
        cin >> estudiantes[i].nota2;

        cout << "Nota 3: ";
        cin >> estudiantes[i].nota3;

        estudiantes[i].promedio = (estudiantes[i].nota1 +
                                   estudiantes[i].nota2 +
                                   estudiantes[i].nota3) / 3;
    }

    cout << "\n--- Resultados ---\n";

    for (int i = 0; i < n; i++) {
        cout << "Nombre: " << estudiantes[i].nombre << endl;
        cout << "Promedio: " << estudiantes[i].promedio << endl;
    }

    return 0;
}