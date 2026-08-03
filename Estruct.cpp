#include <iostream>
#include <string>
using namespace std;
struct Estudiante {
    string nombres;
    string apellidoPaterno;
    string apellidoMaterno;
    int codigo;
    string ciclo;
    string curso;
    float calificacion;
};
int main() {
    const int MAX_ESTUDIANTES = 5;
    Estudiante estudiantes[MAX_ESTUDIANTES];

    // Capturar datos de los estudiantes
    for (int i = 0; i < MAX_ESTUDIANTES; i++) {
        cout << "Estudiante #" << (i + 1) << endl;
        cout << "Nombres: ";
        cin >> estudiantes[i].nombres;
        cout << "Apellido Paterno: ";
        cin >> estudiantes[i].apellidoPaterno;
        cout << "Apellido Materno: ";
        cin >> estudiantes[i].apellidoMaterno;
        cout << "Código: ";
        cin >> estudiantes[i].codigo;
        cout << "Ciclo: ";
        cin >> estudiantes[i].ciclo;
        cout << "Curso: ";
        cin >> estudiantes[i].curso;
        cout << "Calificación: ";
        cin >> estudiantes[i].calificacion;
        cout << endl;
    }

    // Mostrar los datos de los estudiantes
    cout << "Datos de los estudiantes:" << endl;
    for (int i = 0; i < MAX_ESTUDIANTES; i++) {
        cout << "Estudiante #" << (i + 1) << endl;
        cout << "Nombres: " << estudiantes[i].nombres << endl;
        cout << "Apellido Paterno: " << estudiantes[i].apellidoPaterno << endl;
        cout << "Apellido Materno: " << estudiantes[i].apellidoMaterno << endl;
        cout << "Código: " << estudiantes[i].codigo << endl;
        cout << "Ciclo: " << estudiantes[i].ciclo << endl;
        cout << "Curso: " << estudiantes[i].curso << endl;
        cout << "Calificación: " << estudiantes[i].calificacion << endl;
        cout << endl;
    }
    return 0;
}
