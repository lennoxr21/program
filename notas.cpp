#include <iostream>
using namespace std;
int main(){
    float nota;
    float suma=0;
    float contador=0;
    float aprobados=0,desaprobados=0;
    float mayor=0,menor=20;
    cout<<"Digite notas del 0-20.Con -1 se termina"; cin>>nota;
    
    while(nota!=-1){
        if(nota>=0&&nota<=20){
            suma=suma+nota;
            contador++;
              if(nota>=11){
                aprobados++;
               }
              else {
              desaprobados++;
               }
              if(nota>mayor){
            nota=mayor;
               }
              if(nota<menor){
            nota=menor; 
              }
        } else{
        cout<<"Nota no valida\n";
    }
    cin>>nota;
  
   }
   if (contador > 0) {
        cout << "Promedio: " << suma / contador << endl;
        cout << "Aprobados: " << aprobados << endl;
        cout << "Desaprobados: " << desaprobados << endl;
        cout << "Mayor: " << mayor << endl;
        cout << "Menor: " << menor << endl;
    } else {
        cout << "No ingresaste notas validas";
    }
return 0;
}