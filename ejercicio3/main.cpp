#include <iostream>
using namespace std;
int main() {
   char letra;
   int num=0;
   cout<<"Escriba una letra: ";
   cin>>letra;
    cout<<"Escriba una numero: ";
   cin>>num;
   if (letra=='a' or letra=='c' or letra=='e' or letra=='g'){
        if (num%2!=0){
            cout<<"El casillero es de color negro";
        }
        else{
            cout<<"El casillero es de color blanco";
        }
   }
   else{
       if (num%2==0){
           cout<<"El casillero es de color negro";
       }
       else{
           cout<<"El casillero es de color blanco";
       }
   }
}
