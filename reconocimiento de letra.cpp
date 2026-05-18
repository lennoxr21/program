#include <iostream>
using namespace std;
int main(){
    int n1,n2,n3,n4;
      cout<<"Digite tres numeros"; cin>>n1>>n2>>n3;
      cout<<"Digite un cuarto numero"; cin>>n4;
       if(n1==n4||n2==n4||n3==n4){
         cout<<"El cuarto coincide con los primeros";
       }
       else {
        cout<<"El numero no coincide";
       }
return 0;
}