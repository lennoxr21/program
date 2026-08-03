#include <iostream>
using namespace std;
struct Estudiante{
    int codigo;
    string nombre;
    int edad;
};
int main(){
    Estudiante e1;
    e1.codigo = 101;
    e1.nombre = "Len";
    e1.edad = 19;
    cout<<"Codigo: "<<e1.codigo<<endl;
    cout<<"Nombre: "<<e1.nombre<<endl;
    cout<<"Edad: "<<e1.edad<<endl;
    return 0;
}