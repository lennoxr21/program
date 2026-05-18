#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int opc;
      cout<<"Bienvenido a siguiente menú"<<endl;
      cout<<"1.Cubo de un número"<<endl;
      cout<<"2.Numero par o impar"<<endl;
      cout<<"3.Salir"<<endl;
      cout<<"Opcion";cin>>opc;
    int n1,n2,potencia;
       switch(opc){
           case 1:
             cout<<"Digite el número";cin>>n1;
             potencia=n1*n1*n1;
             cout<<"El resultado es"<<potencia;
             break;
            case 2:
             cout<<"Digite el numero";cin>>n2;
              if (n2==0){
                  cout<<"El numero no es par ni impar";
              }
              else if ((n2%2)==0){
                  cout<<"El numero es par";
              }
              else{
                  cout<<"El numero es impar";
                 break;
        
              }
             case 3: break;
       }
      
return 0;
}