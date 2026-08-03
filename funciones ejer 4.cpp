#include <iostream>
using namespace std;
void imprime_mensaje() {
 int i = rand()%3 + 1;
     if(i==1)
   cout<<"Hola\n";
     if(i==2)
   cout<<"Adios\n";
    if(i==3)
   cout<<"Bienvenido\n";
}
int main(){
   for(int i = 1 ; i <= 10 ; i++)
   imprime_mensaje();
    return 0;
}