#include <iostream>

using namespace std;
int main(){
    int numero,conta=0,conti=0;
    do{
        cout<<"Ingrese un numero: ";
        cin>>numero;
        if (numero%2==0){
            conta=conta+1;
        }
        else{
            conti=conti+1;
        }
    }
    while(numero!=0);
    cout<<"La cantidad de numeros pares es: "<<conta-1<<endl;
    cout<<"La cantidad de numeros impares es: "<<conti<<endl;
}
